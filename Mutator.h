#ifndef MUTATOR_H
#define MUTATOR_H
#include "Individual.h"
#include <string>

class Mutator {
    public:
        Mutator();

    virtual Individual mutate(Individual i, int k) = 0;
    
};
#endif