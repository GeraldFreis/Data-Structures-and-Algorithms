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
        int result = binaryOperator(given_vector.at(0), given_vector.at(1));
        if(result == given_vector.at(0)){given_vector.erase(given_vector.begin());}
        else{given_vector.erase(given_vector.begin()+1);}

        min = reduce(given_vector);
    }

    if(binaryOperator(given_vector.at(0), given_vector.at(1) < min)){
        return binaryOperator(given_vector.at(0), given_vector.at(1));
    } else {
        return min;
    }
}