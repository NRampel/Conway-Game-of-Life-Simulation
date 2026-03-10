#include "simulator.h"

Simulator::Simulator(size_t width, size_t height) {
    currentGrid = std::make_unique<Grid>(width, height);
    nextGrid = std::make_unique<Grid>(width, height);
}

Simulator::~Simulator() = default;

void Simulator::update() {
    uint8_t neighbors; 
    uint8_t currentState; 
    uint8_t nextState; 
    for(size_t y = 0; y < currentGrid->getHeight(); y++) {
        for(size_t x = 0; x < currentGrid->getWidth(); x++) {
            neighbors = countNeighbors(x, y);
            currentState = currentGrid->getCellState(x, y);
            nextState = determineNextState(currentState, neighbors);
            nextGrid->setCellState(x, y, nextState);
        }
    }
   currentGrid.swap(nextGrid); 
}

int Simulator::countNeighbors(size_t x, size_t y) {
    int count = 0;
    for(int i = -1; i <= 1; i++) {
        for(int j = -1; j <= 1; j++) {
            if(i == 0 && j == 0) continue;
            if(x + i >= 0 && x + i < currentGrid->getWidth() && y + j >= 0 && y + j < currentGrid->getHeight()) {
                count += currentGrid->getCellState(x + i, y + j);
            }
        }
    }
    return count;
}
