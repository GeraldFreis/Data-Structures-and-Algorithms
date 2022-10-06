#include <iostream>
#include "RecursiveBinarySearch.h"
#include <vector>

int main(){
    std::vector<int> given_vec({0,1,2,3,4,5,6,7,8,9,10});
    RecursiveBinarySearch ssearch;
    if(ssearch.search(given_vec, 4) == true){std::cout<< "True" << "\n";}
    else {
        std::cout << "False" << "\n";
    }
}