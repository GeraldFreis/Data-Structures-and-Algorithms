#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H

#include "ReduceGeneric.h"

class ReduceMinimum : public ReduceGeneric {
    private:
        int binaryOperator(int x, int y);
    
    public:
        int reduce(std::vector<int> given_vector);
};

#endif