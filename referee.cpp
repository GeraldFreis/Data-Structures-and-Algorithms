#include "referee.h"

/*
Checking who won the game
preconditions = Human and Computer objects as parameters -> requires moves to be chosen for both objects
postconditions = winner is changed, must be retrieved via the get_winner function
*/
void Referee::check_winner(Player *h, Player *c){
    char human_move = h->get_move(); char computer_move = c->get_move();

    // checking who won using the common rules of rock, paper, scissors
    if (human_move == 'r' && computer_move == 'r'){
        winner = "draw";
    }
    else if (human_move == 'r' && computer_move == 's'){
        winner = "human";
    }
    else if (human_move == 'r' && computer_move == 'p'){
        winner = "computer";
    }
    else if (human_move == 's' && computer_move == 'r'){
        winner = "computer";
    }
    else if (human_move == 'p' && computer_move == 'r'){
        winner = "human";
    }
    else if (human_move == 's' && computer_move == 's'){
        winner = "draw";
    }
    else if (human_move == 'p' && computer_move == 'p'){
        winner = "draw";
    }
    else if (human_move == 's' && computer_move == 'p'){
        winner = "human";
    }
}

// returning the winner
std::string Referee::get_winner(){return winner;}