#include <iostream>
#include "player.h"
#include "computer.h"
#include "human.h"
#include "referee.h"

#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H

/*
Class to control the game
*/
class GameManager {
    private:
        Player *computer;
        Player *user;
        Referee ref;

    
    public:
        GameManager();

        // function to control the game
        void main_loop();

        ~GameManager();
};

#endif