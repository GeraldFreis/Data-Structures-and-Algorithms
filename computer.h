#include "player.h"

/* Computer sub class of the Player class
*/
class Computer: protected Player {
    public:
        void choose_move();
};