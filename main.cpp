#include <iostream>
// #include "human.h"
// #include "player.h"
// #include "computer.h"
// #include "referee.h"
#include "game_manager.h"

int main() {
    // Player *user = new Human();
    // Player *computer = new Computer();
    // Referee ref;

    // user->choose_move();
    // computer->choose_move();

    // ref.check_winner(user, computer);
    // std::cout << "\n" << "you played: " << user->get_move() << " The computer played: " << computer->get_move() << "\n";
    // std::cout << "The winner is: "<<ref.get_winner() << "\n";
    GameManager gamecontroller;
    gamecontroller.main_loop();
}