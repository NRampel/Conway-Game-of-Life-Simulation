#include "grid.h"

Grid::Grid(size_t width, size_t height) : width(width), height(height) {
    this->gridArr.resize(width*height)
}
bool Grid::getCellState(size_t x, size_t y) {
    return this->gridArr[{(y*width)+x}]; 
}

void Grid::setCellState(size_t x, size_t y, uint8_t state) {
    this->gridArr[{(y*width)+x}]=state; 
}

size_t Grid::getHeight() {
    return this->height; 
}

size_t Grid::getWidth(){
    return this->width; 
}