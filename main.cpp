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
    std::vector<int> userints({6, -11, 53, -16, 73, 128, 105, 104, -71, -179, 102, 12, 21, -145, -99, 199,-156, -186, 43, -189});
    // for(int i = 0; i < 20; i++){
    //     int x;
    //     std::cin >> x;
    //     userints.push_back(x);
    // }

    MapGeneric *maptrip = new MapTriple; MapGeneric *mapabs = new MapAbsoluteValue;
    FilterGeneric *filtertwodigs = new FilterForTwoDigitPositive; FilterGeneric *filterodds = new FilterOdd;
    ReduceGeneric *reducemin = new ReduceMinimum; ReduceGeneric *reducegcd = new ReduceGCD;

    std::vector<int> maps = mapabs->map(maptrip->map(userints));
    std::vector<int> filters = filtertwodigs->filter(filterodds->filter(maps));

    std::cout << reducemin->reduce(filters) << " " << reducegcd->reduce(filters) << "\n";
}