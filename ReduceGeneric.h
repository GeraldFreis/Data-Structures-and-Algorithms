#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H

#include <vector>

class ReduceGeneric {
    private:
        virtual int binaryOperator(int a, int b) = 0;
        int returnable_res;
        
    public: 
        int reduce(std::vector<int> given_vector);
};

#endif