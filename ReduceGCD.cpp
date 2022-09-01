#include "ReduceGCD.h"
#include <cmath>

int ReduceGCD::binaryOperator(int x, int y){
    if(y != 0){
        return binaryOperator(y, x % y);
    }
    else{
        return x;
    }
}

ReduceGCD::ReduceGCD(){
    gcd = -100;
}

int ReduceGCD::reduce(std::vector<int> given_vector){
    // iterate from the first element in the vector to the last element and 
    if(given_vector.size() > 2){
        for(int i = 1; i < given_vector.size(); i++){
            if(given_vector.at(i) != given_vector.at(0)){
                if(binaryOperator(given_vector.at(0), given_vector.at(i)) > gcd){
                    gcd = binaryOperator(given_vector.at(0), given_vector.at(i));
                }
            }
        }
        given_vector.erase(given_vector.begin());

        reduce(given_vector);
    }

    if(given_vector.at(0) != given_vector.at(1)){
        return binaryOperator(given_vector.at(0), given_vector.at(1));
    }
    else{
        return gcd;
    }
}