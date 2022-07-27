#include <iostream>
#include "human.h"
#include "player.h"
#include "computer.h"
#include "referee.h"

int main() {
    Player *user = new Human();
    Player *computer = new Computer();
    Referee ref;

    user->choose_move();
    computer->choose_move();

    ref.check_winner(user, computer);
    std::cout << ref.get_winner() << "\n";
}