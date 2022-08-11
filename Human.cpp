#include "Human.h"

Human::Human(){
    this->current_move = ' ';
}

// gets the move from the user and returns it as a character
char Human::make_move(){
    std::cin >> this->current_move;
    return this->current_move;
}