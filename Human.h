#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <vector>


/*
Human class representing a human

*/
class Human {
    private:
        char current_move;
    
    public:
        Human();

        char make_move();

};

#endif 