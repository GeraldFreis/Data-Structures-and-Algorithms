#ifndef PAPERDOLL_H
#define PAPERDOLL_H

#include <iostream>
#include "Computer.h"

class PaperDoll: public Computer {
    private:
        bool firsttime;
        int scissors_count;
    public:
        PaperDoll();

        char make_move();
        void reset();
};

#endif