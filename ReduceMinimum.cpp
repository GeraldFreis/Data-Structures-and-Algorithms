#include "ReduceMinimum.h"

int ReduceMinimum::binaryOperator(int x, int y){
    if(x < y){return x;}
    else {return y;}
}

ReduceMinimum::ReduceMinimum(){
    min = 10000;
}

int ReduceMinimum::reduce(std::vector<int> given_vector){
    if(given_vector.size() > 2){
        if(binaryOperator(given_vector.at(0), given_vector.at(1)) < min){
            min = binaryOperator(given_vector.at(0), given_vector.at(1));
        }   

        given_vector.erase(given_vector.begin());

        reduce(given_vector);
    }

    if(binaryOperator(given_vector.at(0), given_vector.at(1)) < min){
        return binaryOperator(given_vector.at(0), given_vector.at(1));
    }
    return min;
}