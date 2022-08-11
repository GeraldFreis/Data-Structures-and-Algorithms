#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main () {
    Human user;
    Computer comp;
    Referee ref;
    if(ref.refGame(user, comp) == 'W'){ 
        std::cout << "Player won" << "\n";
    } else if (ref.refGame(user, comp) == 'L'){
        std::cout << "PLayer lost" << "\n";
    } else {
        std::cout << "Player and computer tied" << "\n";
    }
}