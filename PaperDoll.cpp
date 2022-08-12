#include "PaperDoll.h"

PaperDoll::PaperDoll(){
    this->name = "PaperDoll";
    this->current_move = 'P';
    firsttime = true;
    scissors_count = 0;
}

// Crescendo always plays in paper, scissors, rock order
char PaperDoll::make_move(){
    if(this->current_move == 'P' && firsttime != true){
        this->current_move = 'S';
        return 'S';
    }
    
    else if(this->current_move == 'S' && scissors_count == 0){
        this->current_move = 'S';
        scissors_count++;
        return 'S';
    }

    else if(this->current_move == 'S' && scissors_count == 1){
        this->current_move = 'P';
        scissors_count = 0;
        return 'P';
    }

    else {
        std::cout << "code malfunctioned in Paperdoll line 22" << "\n";
        return 'M';
    }
    
    if(this->current_move == 'P' && firsttime == true){
        firsttime = false;
        this->current_move = 'S';
        return 'P';
    }
}

void PaperDoll::reset(){
    this->current_move = 'P';
    firsttime = true;
    scissors_count = 0;
}