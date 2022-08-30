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

ReduceGCD::ReduceGCD(){gcd = 0;}

int ReduceGCD::reduce(std::vector<int> given_vector){
    if(given_vector.size() > 2){
        for(auto val: given_vector){
            int result = binaryOperator(given_vector.at(0), val);
            if(result > gcd){gcd = result;}
        }

        // deleting the first element as that is what we have been comparing this with
        given_vector.erase(given_vector.begin());
        // iterating recurisvely through the rest of the vector
        reduce(given_vector);
        

    }
    return binaryOperator(given_vector.at(0), given_vector.at(1));

};