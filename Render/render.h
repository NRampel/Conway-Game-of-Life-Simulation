#ifndef RENDER_H
#define RENDER_H

#include "../grid/grid.h"
#include "../cell/cell.h"
#include <iostream>
#include <cstdlib>
#include <string>

#ifdef _WIN32
#include <windows.h>
#endif 

void drawGrid(Grid& currentGrid); 
void clearScreen(); 

#endif
