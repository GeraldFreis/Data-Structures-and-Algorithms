#include <iostream>
#include "player.h"
// #include "human.h"
// #include "computer.h"


#ifndef REFEREE_H
#define REFEREE_H

/*
Class to adjudicate the rock, paper, scissors game
Main responsibility is to find and return the winner of the game
*/
class Referee {
    private:
        std::string winner;
    
    public:
        Referee(){winner = " ";}
        void check_winner(Player *h, Player *c);
        std::string get_winner();
};

#endif