#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include <iostream>
#include "Computer.h"

class RandomComputer: public Computer {
    public:
        RandomComputer(){this->name = "RandomComputer";}
        char make_move();    
        void reset();    
};

#endif