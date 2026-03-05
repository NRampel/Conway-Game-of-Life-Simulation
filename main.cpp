#include "Simulator/simulator.h"
#include "Render/render.h"
#include "Utilities/utilities.h"
#include <chrono> 
#include <thread>
#include <cstdlib>
#include <ctime>

#define WIDTH 100 
#define HEIGHT 40

int main() {
    std::string icon = setCellIcon(); 
    Simulator simulator(WIDTH, HEIGHT);
    srand(time(0)); 
    system("cls"); 
    if(icon == "q") return 0; 
    else {
        for (size_t y = 0; y < HEIGHT; y++) {
            for (size_t x = 0; x < WIDTH; x++) {
                if (rand() % 2 == 0) {
                    simulator.currentGrid.setCellState(x, y, ALIVE);
                }
            }
        }
        while(true) {
            clearScreen(); 
            drawGrid(simulator.currentGrid, icon); 
            simulator.update(); 
            std::this_thread::sleep_for(std::chrono::milliseconds(20)); 
        } 
    }
    return 0; 
}
