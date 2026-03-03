#include "Simulator/simulator.h"
#include "Render/render.h"
#include <chrono> 
#include <thread>

int main() {
    Simulator simulator(10, 10);
    simulator.currentGrid.setCellState(4, 5, ALIVE); 
    simulator.currentGrid.setCellState(5, 5, ALIVE); 
    simulator.currentGrid.setCellState(6, 5, ALIVE); 
    while(true) {
        clearScreen(); 
        drawGrid(simulator.currentGrid); 
        simulator.update(); 
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); 
    }
    return 0; 
}
