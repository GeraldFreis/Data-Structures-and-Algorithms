#include "MapGeneric.h"

std::vector<int> MapGeneric::map(std::vector<int> given_vector){
    // one way to make this function is to start at 0, 
    // then map a value and save it in the vector, then delete it
    // then pass the changed vector to the function recursively
    

    if(given_vector.size() >= 1){
        mapped_integers.push_back(f(given_vector.at(0)));
        given_vector.erase(given_vector.begin());
        map(given_vector);
    }

    return mapped_integers;
}