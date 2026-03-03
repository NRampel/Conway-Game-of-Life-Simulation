#ifndef GRID_H
#define GRID_H

#include <cstdint> 
#include <vector>

class Grid {
    public: 
        Grid(size_t width, size_t height); 
        bool getCellState(size_t x, size_t y);
        void setCellState(size_t x, size_t y, uint8_t state); 
        size_t getHeight(); 
        size_t getWidth(); 
    private: 
        size_t width; 
        size_t height; 
        std::vector<uint8_t> gridArr; 
}; 
#endif 