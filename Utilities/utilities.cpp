#include "utilities.h"

std::string setCellIcon() {
    std::string cellIcon; 
    while(true) {
        std::cout<<"> Enter your cell icon (or q to quit):  "; 
        std::cin>>cellIcon; 
        if(cellIcon == "q") {
            std::cout<<"> Thanks for playing!\n"; 
            break; 
        }
        else if(cellIcon.length() == 1) {
            std::cout<<"> Setting Icon to " + cellIcon + "\n"; 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        }
        else {
            std::cout<<"> " + cellIcon + " is not a valid icon!\n"; 
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        }
    }
    return cellIcon; 
}

void clearScreen() {
   #ifdef _WIN32
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD pos = {0, 0};
        SetConsoleCursorPosition(hConsole, pos);
    #else
        std::cout << "\033[H";
    #endif
}