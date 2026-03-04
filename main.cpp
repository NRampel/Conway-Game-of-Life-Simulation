#include "Simulator/simulator.h"
#include "Render/render.h"
#include <chrono> 
#include <thread>

int main() {
    Simulator simulator(50, 30);
    srand(time(0)); 
    for (size_t y = 0; y < 20; y++) {
        for (size_t x = 0; x < 40; x++) {
            if (rand() % 2 == 0) {
                simulator.currentGrid.setCellState(x, y, ALIVE);
            }
        }
    }
    while(true) {
        clearScreen(); 
        drawGrid(simulator.currentGrid); 
        simulator.update(); 
        std::this_thread::sleep_for(std::chrono::milliseconds(20)); 
    }
    return 0; 
}
