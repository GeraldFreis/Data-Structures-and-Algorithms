#include "player.h"

#ifndef COMPUTER_H
#define COMPUTER_H
/* Computer sub class of the Player class
*/
class Computer: protected Player {
    public:
        void choose_move();
};
#endif