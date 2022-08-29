#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H

#include <vector>   

class ReduceGeneric {
    private:
        int binaryOperator(int a, int b);
        
    public: 
        int reduce(std::vector<int> given_vector);
};

#endif