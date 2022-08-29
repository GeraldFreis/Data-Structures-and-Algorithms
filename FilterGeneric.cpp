#include "FilterGeneric.h"

std::vector<int> FilterGeneric::filter(std::vector<int> given_vector){
    if(given_vector.size() >= 1){
        if(g(given_vector.at(0)) == true){
            filtered_vector.push_back(given_vector.at(0));
        }
        given_vector.erase(given_vector.begin());
        filter(given_vector);
    }
    return filtered_vector;
};