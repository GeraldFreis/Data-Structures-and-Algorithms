#ifndef REDUCEGCD_H
#define REDUCEGCD_H
#include "ReduceGeneric.h"

class ReduceGCD: public ReduceGeneric {
    private:
        int gcd;
        int binaryOperator(int x, int y);
    
    public:
        ReduceGCD();
        int reduce(std::vector<int> given_vector);
};

#endif