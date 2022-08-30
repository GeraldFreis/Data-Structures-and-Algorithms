#include <iostream>
#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterGeneric.h"
#include "FilterForTwoDigitPositive.h"
#include "FilterNonPositive.h"
#include "FilterOdd.h"

#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"

#include <iostream>


int main(){
    std::vector<int> userints({-21, 91, 46, 74, -44, 149, -192, 41, -9, -32, -133, 137, 178, -4, 119, -9, -111, -144, -184, -33});
    // for(int i = 0; i < 20; i++){
    //     int x;
    //     std::cin >> x;
    //     userints.push_back(x);
    // }

    MapGeneric *maptrip = new MapTriple; MapGeneric *mapabs = new MapAbsoluteValue;
    FilterGeneric *filtertwodigs = new FilterForTwoDigitPositive; FilterGeneric *filterodds = new FilterOdd;
    ReduceGeneric *reducemin = new ReduceMinimum; ReduceGeneric *reducegcd = new ReduceGCD;

    std::vector<int> maps = maptrip->map(mapabs->map(userints));
    for(auto a: maps){std::cout << a << " ";}
    std::cout << "\n";
    std::vector<int> filters = filterodds->filter(filtertwodigs->filter(maps));
    for(auto a: filters){std::cout << a << " ";}
    std::cout << "\n";
    std::cout << reducemin->reduce(filters) << " " << reducegcd->reduce(filters) << "\n";
}