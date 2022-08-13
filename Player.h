#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

class Player {
    protected:
        char current_move;
        std::string name;

    public:
        Player();
        virtual char make_move() = 0;
        virtual void reset() = 0;
        virtual void printname();
};

#endif