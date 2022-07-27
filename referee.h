#include <iostream>


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
        void check_winner();
        std::string get_winner();
};

#endif