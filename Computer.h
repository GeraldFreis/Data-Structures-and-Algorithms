#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer: public Player {
    // protected:
    //     char current_move;
    
    public:
        Computer();

        virtual char make_move();
        virtual void reset() = 0;
};

#endif