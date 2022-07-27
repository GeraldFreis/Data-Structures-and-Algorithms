#include "player.h"
#ifndef HUMAN_H
#define HUMAN_H

/*
Human subclass of Player superclass, handles choosing the players move
*/
class Human: public Player {
    public:
        void choose_move();
};

#endif