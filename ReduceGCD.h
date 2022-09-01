#ifndef REDUCEGCD_H
#define REDUCEGCD_H
#include "ReduceGeneric.h"
#include <vector>


class ReduceGCD: public ReduceGeneric {
    private:
        int binaryOperator(int x, int y);
        int gcd;
    
    public:
        ReduceGCD();
        int reduce(std::vector<int> given_vector);
};

#endif