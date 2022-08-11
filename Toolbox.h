#ifndef TOOLBOX_H
#define TOOLBOX_H

#include "Computer.h"
#include <iostream>

class Toolbox: public Computer {
    public:
        char make_move();
};

#endif 