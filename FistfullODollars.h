#ifndef FISTFULLODOLLARS_H
#define FISTFULLODOLLARS_H

#include <iostream>
#include "Computer.h"

class FistfullODollars: public Computer {
    private:
        bool firsttime;
        int paper_counter;
    
    public:
        FistfullODollars();
        char make_move();
};

#endif