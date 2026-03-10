#ifndef SIMULATOR_H
#define SIMULATOR_H

#include "../cell/cell.h"
#include "../grid/grid.h"
#include <memory>

class Simulator {
    public: 
        Simulator(size_t width, size_t height); 
        ~Simulator(); 
        void update(); 
        std::unique_ptr<Grid> currentGrid; 
        std::unique_ptr<Grid> nextGrid; 
    private: 
        int countNeighbors(size_t x, size_t y); 
}; 
#endif