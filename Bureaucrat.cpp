#include "Bureaucrat.h"

// always returns P for paper
char Bureaucrat::make_move(){
    this->current_move = 'P';
    return 'P';
}

void Bureaucrat::reset(){
    this->current_move = 'P';
}