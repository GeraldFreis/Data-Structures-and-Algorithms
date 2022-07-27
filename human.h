#include "player.h"

/*
Human subclass of Player superclass, handles choosing the players move
*/
class Human: protected Player {
    public:
        void choose_move();
};