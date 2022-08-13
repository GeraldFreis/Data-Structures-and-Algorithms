#include <iostream>
#include "Tournament.h"
#include <array>
#include "Player.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "FistfullODollars.h"

int main () {
    std::array<Player*, 8> players;
    players[0] = new Avalanche;
    players[1] = new Avalanche;
    players[2] = new Avalanche;
    players[3] = new Avalanche;
    players[4] = new Avalanche;
    players[5] = new Bureaucrat;
    players[6] = new Avalanche;
    players[7] = new Avalanche;

    Tournament tourny;
    Player *winner = tourny.run(players);

    winner->printname();
}