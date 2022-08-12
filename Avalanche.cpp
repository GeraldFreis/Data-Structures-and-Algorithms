#include "Avalanche.h"

// always returns Rock
char Avalanche::make_move(){
    this->current_move = 'R';
    return 'R';
}

void Avalanche::reset(){
    this->current_move = 'R';
}
