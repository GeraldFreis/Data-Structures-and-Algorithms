#include "QuickSort.h"
#include <vector>
#include <iostream>

bool is_sorted(std::vector<int> given_vector){
    for(int i = 1; i < given_vector.size(); i++){
        if(given_vector.at(i) < given_vector.at(i-1)){return false;}
    }
    return true;
}

std::vector<int> QuickSort::sort(std::vector<int> given_vector){
    // checking if the given vector is at least of len 3
    if(given_vector.size() == 1){
        return given_vector;
    } else if(given_vector.size() == 2){
        if(given_vector.at(1) < given_vector.at(0)){
            int tempval = given_vector.at(0);
            given_vector.at(0) = given_vector.at(1);
            given_vector.at(1) = tempval;
        }
        return given_vector;
    }

    int pivot_value = given_vector.at(2); // making the pivot the third value in the vector

    // moving all smaller values to the left of the vector and larger values to the right
    std::vector<int> changed_vector({pivot_value});
    int counter = 0;
    for(auto a: given_vector){
        if(a < pivot_value){
            changed_vector.insert(changed_vector.begin()+counter, a);
            counter += 1;
        } else if(a > pivot_value){
            changed_vector.push_back(a);
        }
    }
    
    // cutting the vector in half and passing first half recursively and second half recursively then putting them back together
    std::vector<int> low_vec, high_vec;
    for(int i = 0; i < changed_vector.size(); i++){
        if(i < int(changed_vector.size()/2)){low_vec.push_back(changed_vector.at(i));}
        else {high_vec.push_back(changed_vector.at(i));}
        // std::cout << changed_vector.at(i) << " ";
    }
    // std::cout << "\n";
    low_vec = sort(low_vec); high_vec = sort(high_vec);
    for(auto a: high_vec){low_vec.push_back(a);}

    while(is_sorted(low_vec) == false){
        low_vec = sort(low_vec);
    }
    return low_vec;    
}