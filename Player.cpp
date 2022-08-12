#include "Player.h"

Player::Player(){
    current_move = ' ';
    this->name = "Player";
}

void Player::printname(){std::cout << this->name << "\n";}