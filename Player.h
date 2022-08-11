#ifndef PLAYER_H
#define PLAYER_H

class Player {
    protected:
        char current_move;

    public:
        Player();
        virtual char make_move() = 0;
};

#endif