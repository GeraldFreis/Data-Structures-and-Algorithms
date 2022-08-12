#ifndef AVALANCHE_H
#define AVALANCHE_H
#include <iostream>
#include "Computer.h"

class Avalanche : public Computer {
    public:
        char make_move();
        void reset();
};

#endif