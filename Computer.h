#ifndef COMPUTER_H
#define COMPUTER_H

class Computer {
    protected:
        char current_move;
    
    public:
        Computer();

        virtual char make_move();
};

#endif