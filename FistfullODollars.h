#ifndef FISTFULLODOLLARS_H
#define FISTFULLODOLLARS_H

#include <iostream>
#include "Computer.h"

class FistFullODollars: public Computer {
    private:
        bool firsttime;
        int paper_counter;
    
    public:
        FistFullODollars();
        char make_move();
};

#endif