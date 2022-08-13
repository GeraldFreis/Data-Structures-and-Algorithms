#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include "Computer.h"


class Bureaucrat : public Computer {

    public:
        Bureaucrat(){this->name = "Bureaucrat";}
        char make_move();
        void reset();
        // void printname(){std::cout << "Bureaucrat" << "\n";}

};

#endif