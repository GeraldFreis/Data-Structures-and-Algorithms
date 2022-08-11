#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <vector>
#include "Player.h"


/*
Human class representing a human

*/
class Human: public Player {
    // private:
    //     char current_move;
    
    public:
        Human();

        char make_move();

};

#endif 