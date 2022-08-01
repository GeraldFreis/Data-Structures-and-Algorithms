#ifndef COMPUTER_H
#define COMPUTER_H

class Computer {
    private:
        char current_move;
    
    public:
        Computer();

        char make_move();
};

#endif