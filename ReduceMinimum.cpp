#include "ReduceMinimum.h"

int ReduceMinimum::binaryOperator(int x, int y){
    if(x < y){return x;}
    else {return y;}
}

int ReduceMinimum::reduce(std::vector<int> given_vector){
    if(given_vector.size() <= 2){
        return binaryOperator(given_vector.at(0), given_vector.at(1));
    }
    else{
        int result = binaryOperator(given_vector.at(0), given_vector.at(1));
        if(result == given_vector.at(0)){given_vector.erase(given_vector.begin());}
        else{given_vector.erase(given_vector.begin()+1);}

        reduce(given_vector);
    }
}