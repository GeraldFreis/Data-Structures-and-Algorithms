#ifndef TOURNAMENT_H
#define TOURNAMENT_H

#include "Player.h"
#include <array>
#include <iostream>


class Tournament {
    private:
        
    public:
        Player *run(std::array<Player *, 8> competitors);
};  

#endif