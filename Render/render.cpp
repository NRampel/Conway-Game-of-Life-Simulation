#include "render.h"

void drawGrid(Grid& currentGrid) {
    for(size_t y = 0; y < currentGrid.getHeight(); y++) {
        for(size_t x = 0; x < currentGrid.getWidth(); x++) {
            if(currentGrid.getCellState(x, y) == ALIVE) {
                std::cout << "#"; 
            }
            else {
                std::cout << "."; 
            }
        }
        std::cout << std::endl; 
    }
}

void clearScreen() {
    std::cout << "\033[2J\033[1;1H";
}
