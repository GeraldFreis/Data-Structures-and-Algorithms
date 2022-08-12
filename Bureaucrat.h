#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include "Computer.h"


class Bureaucrat : public Computer {
    public:
        char make_move();
        void reset();
};

#endif