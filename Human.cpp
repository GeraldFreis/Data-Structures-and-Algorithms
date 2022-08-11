#include "Human.h"

Human::Human(){
    current_move = ' ';
}

// gets the move from the user and returns it as a character
char Human::make_move(){
    std::cin >> current_move;
    return current_move;
}