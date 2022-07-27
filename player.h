#include <iostream>
#include <vector>

#ifndef PLAYER_H
#define PLAYER_H
/*
This class is an abstract superclass for the two base classes: computer and human
*/
class Player {
    protected:
        std::vector<char> past_moves;
        char current_move;
    
    public:
        Player(){current_move =  'n';}
        
        char get_move();
        void set_move(char new_move);
        virtual void choose_move() = 0;

        std::vector<char> get_past_moves();

};
#endif