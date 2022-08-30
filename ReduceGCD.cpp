#include "ReduceGCD.h"
#include <iostream>

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
        for(int i = 1; i < given_vector.size()-1; i++){
            if(given_vector.at(i) != given_vector.at(0)){
                int result = binaryOperator(given_vector.at(0), given_vector.at(i));
                if(result > gcd){gcd = result;}
                // std::cout << given_vector.at(i) << " " << given_vector.at(0) << " " << result << " " << gcd <<"\n";
            }
        }

        // deleting the first element as that is what we have been comparing this with
        given_vector.erase(given_vector.begin());
        // iterating recurisvely through the rest of the vector
        reduce(given_vector);
    }
    return gcd;
};