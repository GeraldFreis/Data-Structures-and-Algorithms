#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include <iostream>
#include "Computer.h"

class RandomComputer: public Computer {
    public:
        char make_move();    
        void reset();    
};

#endif