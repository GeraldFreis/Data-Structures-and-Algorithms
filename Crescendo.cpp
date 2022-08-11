#include "Crescendo.h"


Crescendo::Crescendo(){
    this->current_move = 'P';
    firstmove = true;
}

// Crescendo always plays in paper, scissors, rock order
char Crescendo::make_move(){
    if(this->current_move == 'P' && firstmove != true){
        this->current_move = 'S';
        return 'S';
    }
    else if(this->current_move == 'S'){
        this->current_move = 'R';
        return 'R';
    }
    else if(this->current_move == 'R'){
        this->current_move = 'P';
        return 'P';
    }
    else {
        std::cout << "code malfunctioned in Crescendo line 22" << "\n";
        return 'M';
    }
    
    if(this->current_move == 'P' && firstmove == true){
        firstmove = false;
        this->current_move = 'S';
        return 'P';
    }
}