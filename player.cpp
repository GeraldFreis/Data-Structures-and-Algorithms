#include "player.h"

/* set current move
Preconditions = parameter new move (requires a character of the new move)
Postconditions = current_move can be retrieved using the get_move function
*/
void Player::set_move(char new_move){
    past_moves.push_back(current_move);
    current_move = new_move;
}

// returns current move
char Player::get_move(){
    return current_move;
}

// returns past moves
std::vector<char> Player::get_past_moves(){
    return past_moves;
}