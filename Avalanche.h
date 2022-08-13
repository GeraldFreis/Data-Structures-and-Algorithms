#ifndef AVALANCHE_H
#define AVALANCHE_H
#include <iostream>
#include "Computer.h"

class Avalanche : public Computer {

    public:
        Avalanche(){this->name = "Avalanche";}
        char make_move();
        void reset();
        void printname(){std::cout << "Avalanche" << "\n";}
};

#endif