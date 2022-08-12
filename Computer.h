#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer: public Player {
    // protected:
    //     char current_move;
    protected:
        std::string name;
    
    public:
        Computer();

        virtual char make_move();

        void printname();
};

#endif