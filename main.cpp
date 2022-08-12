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
    players[1] = new Bureaucrat;
    players[2] = new Bureaucrat;
    players[3] = new Toolbox;
    players[4] = new Toolbox;
    players[5] = new Crescendo;
    players[6] = new Crescendo;
    players[7] = new FistfullODollars;

    Tournament tourny;
    Player *winner = tourny.run(players);

    winner->printname();
}