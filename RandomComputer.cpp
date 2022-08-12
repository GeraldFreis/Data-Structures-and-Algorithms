#include "RandomComputer.h"

// makes the computers move (requires a seeded srand (time (NULL)) in calling function)
char RandomComputer::make_move() {
    int randIndex = rand() * 3;
    char outcomes[3] = {'R', 'P', 'S'};
    this->current_move = outcomes[randIndex];
    return outcomes[randIndex];
}

void RandomComputer::reset(){
    this->current_move = 'R';
}