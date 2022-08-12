#ifndef TOOLBOX_H
#define TOOLBOX_H

#include "Computer.h"
#include <iostream>

class Toolbox: public Computer {
    public:
        Toolbox(){this->name = "Toolbox";}
        char make_move();
        void reset();
};

#endif 