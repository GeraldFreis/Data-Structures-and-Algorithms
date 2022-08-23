#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H
#include <cmath>
#include <map>
class EfficientTruckloads {
    private:
        std::map<int, int> cratePairs;
        
    public:
        int numTrucks(int numCrates, int loadSize);
};

#endif