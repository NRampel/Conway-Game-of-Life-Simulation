#include "render.h"

void drawGrid(Grid& currentGrid) {
    std::string frame = ""; 
    frame.reserve(currentGrid.getWidth() * currentGrid.getHeight() + currentGrid.getHeight()); 
    for(size_t y = 0; y < currentGrid.getHeight(); y++) {
        for(size_t x = 0; x < currentGrid.getWidth(); x++) {
            if(currentGrid.getCellState(x, y) == ALIVE) frame += "#"; 
            else frame += "."; 
        }
        frame += '\n';
    }
    std::cout << frame; 
}

void clearScreen() {
   std::cout<<"\033[H"; 
}
