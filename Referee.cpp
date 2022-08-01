#include "Referee.h"

Referee::Referee(){
}

char Referee::refGame(Human player1, Computer player2){
    char playermove = player1.make_move();
    char computermove = player2.make_move();

    if(playermove == 'R' && computermove == 'R'){
        return 'T';
    }
    else if(playermove == 'S' && computermove == 'R'){
        return 'L';
    }
    else if(playermove == 'P' && computermove == 'R'){
        return 'W';
    }
    else {
        return 'A';
    }
};