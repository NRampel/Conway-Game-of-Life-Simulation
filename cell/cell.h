#ifndef CELL_H
#define CELL_H 

#include <cstdint>

#define ALIVE 1
#define DEAD 0

uint8_t determineNextState(uint8_t currentState, int neighbors); 
#endif