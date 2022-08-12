#include "Computer.h"

Computer::Computer(){
    this->current_move = 'R';
    this->name = "Computer";
}

char Computer::make_move(){
    return 'R';
}

void Computer::printname(){std::cout << this->name << "\n";}