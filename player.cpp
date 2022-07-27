#include "player.h"

void Player::set_move(char new_move){
    past_moves.push_back(current_move);
    current_move = new_move;
}

char Player::get_move(){
    return current_move;
}