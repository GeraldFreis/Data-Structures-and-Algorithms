#include "human.h"

/*
Selecting a move for the human
preconditions = Human object has been instantiated
postconditions = current_move will be updated (must use get_move to return the chosen move)
*/
void Human::choose_move(){
    char new_move = 'a';
    
    while(new_move != 's' && new_move != 'r' && new_move != 'p'){
        std::cout << "Please enter a move for yourself (s for scissors,\n \tp for paper and r for rock): " << "\n\t";
        std::cin >> new_move;

        this->past_moves.push_back(this->current_move);
        this->current_move = new_move;
    }
}