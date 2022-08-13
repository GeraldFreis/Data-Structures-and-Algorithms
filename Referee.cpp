#include "Referee.h"

Referee::Referee(){
}

/* refGame function requires Human, Computer parameters (returns a character of who won the game)
Returns T if the game was a tie
Returns L if the player lost
Returns W if the player won
Returns A if a different output was produced
*/
char Referee::refGame(Player *player1, Player *player2){
    char playermove = player1->make_move();
    char computermove = player2->make_move();

    if(playermove == 'R' && computermove == 'R'){
        return 'T';
    }
    else if(playermove == 'S' && computermove == 'R'){
        return 'L';
    }
    else if(playermove == 'P' && computermove == 'R'){
        return 'W';
    }
    else if(playermove == 'P' && computermove == 'S'){
        return 'L';
    }
    else if(playermove == 'S' && computermove == 'P'){
        return 'W';
    }
    else if(playermove == 'P' && computermove == 'P'){
        return 'T';
    }
    else if(playermove == 'S' && computermove == 'S'){
        return 'T';
    }
    else if(playermove == 'R' && computermove == 'R'){
        return 'T';
    }
    else {
        return 'A';
    }
};