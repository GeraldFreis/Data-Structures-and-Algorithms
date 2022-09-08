#include "Individual.h"
#include <iostream>

Individual::Individual(int binaryLength){
}

Individual::Individual(std::string binary){
    for(auto a: binary){
        binaryRepresentation.push_back(a);
    }
}

std::string Individual::getString(){
    std::string new_string;
    for(auto a: binaryRepresentation){
        new_string += a;
    }
    return new_string;
}

int Individual::getBit(int pos){
    if(pos > binaryRepresentation.size()){
        return -1;
    }
    
    return binaryRepresentation.at(pos);
    
}

void Individual::flipBit(int pos){
    if(pos <= binaryRepresentation.size()){
        if(binaryRepresentation.at(pos) == 0){binaryRepresentation.at(pos) = 1;}
        else{binaryRepresentation.at(pos) = 0;} // can only be 0 or 1 right (presumably)
    }
}

int Individual::getMaxOnes(){
    int max_counter = 0;
    int counter;
    int prev_val;
    for(auto a: binaryRepresentation){
        if(a != 0 && prev_val == 1){
            counter++; 
            prev_val = a;
            if(counter > max_counter){max_counter = counter;}

        }
        else{prev_val = a; counter = 0;}
    }

    return max_counter;
};

int Individual::getLength(){
    return binaryRepresentation.size();
}