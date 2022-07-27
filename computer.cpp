#include "computer.h"

/* 
Chooses a move of either scissors, paper or rock
preconditions = Computer object instantiated
postconditions = changes current_move in object
*/
void Computer::choose_move(){
    srand(time (NULL));

    char moves[3] = {'s', 'p', 'r'};
    int randint = rand() % 3;

    char chosen_move = moves[randint];
    
    this->past_moves.push_back(this->current_move);

    this->current_move = chosen_move;
}