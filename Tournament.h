#ifndef TOURNAMENT_H
#define TOURNAMENT_H

#include "Player.h"
#include <array>
#include <iostream>
#include <vector>
#include "Referee.h"


class Tournament {
    private:
        std::vector<Player> winners;
    public:
        Player *run(std::array<Player *, 8> competitors);
};  

#endif