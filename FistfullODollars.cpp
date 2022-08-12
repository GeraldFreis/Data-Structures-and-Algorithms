#include "FistfullODollars.h"

FistfullODollars::FistfullODollars(){
    this->current_move = 'R';
    firsttime = true;
    paper_counter = 0;
}

// FistfullODollars always plays in Rock, Paper, Paper order
char FistfullODollars::make_move(){
    if(this->current_move == 'R' && firsttime != true){
        this->current_move = 'P';
        return 'P';
    }
    
    else if(this->current_move == 'P' && paper_counter == 0){
        this->current_move = 'P';
        paper_counter++;
        return 'P';
    }

    else if(this->current_move == 'P' && paper_counter == 1){
        this->current_move = 'R';
        paper_counter = 0;
        return 'R';
    }

    else {
        std::cout << "code malfunctioned in FistFullODollars line 22" << "\n";
        return 'M';
    }
    
    if(this->current_move == 'R' && firsttime == true){
        firsttime = false;
        this->current_move = 'P';
        return 'R';
    }
}

void FistfullODollars::reset(){this->current_move = 'R'; firsttime = true; paper_counter = 0;}