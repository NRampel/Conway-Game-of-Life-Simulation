#include "cell.h"

uint8_t determineNextState(uint8_t currentState, int neighbors) {
    if(currentState == ALIVE) {
        if(neighbors < 2 || neighbors > 3) return DEAD; 
        return ALIVE; 
    }
    else if(currentState == DEAD) {
        if(neighbors == 3) return ALIVE; 
        return DEAD; 
    }
}