#ifndef SIMULATOR_H
#define SIMULATOR_H

#include "../cell/cell.h"
#include "../grid/grid.h"

class Simulator {
    public: 
        Simulator(size_t width, size_t height); 
        void update(); 
        Grid currentGrid; 
        Grid nextGrid; 
    private: 
        int countNeighbors(size_t x, size_t y); 
}; 
#endif