#include <iostream>
#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterGeneric.h"
#include "FilterForTwoDigitPositive.h"
#include "FilterNonPositive.h"
#include "FilterOdd.h"


int main(){
    MapGeneric *maps1 = new MapTriple;
    MapGeneric *maps2 = new MapAbsoluteValue;
    MapGeneric *maps3 = new MapSquare;

    // testing tripled
    std::vector<int> tripled;
    for(int i = 0; i < 3; i++){tripled.push_back(1);}
    std::vector<int> tripledvec = maps1->map(tripled);

    for(int i = 0; i < tripledvec.size(); i++){
        std::cout << tripledvec.at(i) << " ";
    }
    std::cout << "\n";
    
    // testing absolute
    std::vector<int> absolute({1, -2, 3, -4});
    std::vector<int> absolutevec = maps2->map(absolute);
    for(auto a: absolutevec){std::cout << a << " ";}
    std::cout << "\n";

    std::vector<int> square({2,2,2,5});
    std::vector<int> squaredvec = maps3->map(square);
    for(auto a: squaredvec){std::cout << a << " ";}
    std::cout << "\n";

    FilterGeneric *filter1 = new FilterOdd;
    FilterGeneric *filter2 = new FilterNonPositive;
    FilterGeneric *filter3 = new FilterForTwoDigitPositive;

    std::vector<int> odds({1, 3, 4, 6, 8, 9});
    for(auto a: filter1->filter(odds)){
        std::cout << a << " ";
    } std::cout << "\n";

    std::vector<int> nonpositive({-1, -3, -4, 6, 8, 9});
    for(auto a: filter2->filter(nonpositive)){
        std::cout << a << " ";
    } std::cout << "\n";

    std::vector<int> twodigitpos({10, 30, -4, -6, 8, 9});
    for(auto a: filter3->filter(twodigitpos)){
        std::cout << a << " ";
    } std::cout << "\n";
    
}