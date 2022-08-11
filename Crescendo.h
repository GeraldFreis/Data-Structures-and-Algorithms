#ifndef CRESCENDO_H
#define CRESCENDO_H

#include "Computer.h"
#include <iostream>

class Crescendo: public Computer {
    private:
        bool firstmove;
    public:
        Crescendo();
        char make_move();
};

#endif