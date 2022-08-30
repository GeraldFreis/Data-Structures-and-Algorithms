#include "ReduceGeneric.h"
#include <vector>
#include <iostream>

int ReduceGeneric::reduce(std::vector<int> given_vector){
    if(given_vector.size() > 2){
        int result = binaryOperator(given_vector.at(0), given_vector.at(given_vector.size()-1));

        if(result == given_vector.at(given_vector.size()-1)){ // if element 0 > element len -1
            given_vector.erase(given_vector.begin());
        } 
        else {
            given_vector.pop_back();
        }
        // iterating recurisvely through the rest of the vector
        reduce(given_vector);
    }
    return binaryOperator(given_vector.at(0), given_vector.at(1));
};