#include "ReduceGeneric.h"
#include <vector>
#include <iostream>

int ReduceGeneric::reduce(std::vector<int> given_vector){
    if(given_vector.size() > 2){
        for(int i = 1; i < given_vector.size(); i++){
            if(given_vector.at(0) != given_vector.at(i)){
                int result = binaryOperator(given_vector.at(0), given_vector.at(i));
                if(result > returnable_res){returnable_res = result;}
            }
        }
        given_vector.erase(given_vector.begin());
        // iterating recurisvely through the rest of the function
        reduce(given_vector);
    }
    return binaryOperator(given_vector.at(0), given_vector.at(1));
};