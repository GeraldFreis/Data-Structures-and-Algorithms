#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H
#include "Mutator.h"

class BitFlipProb: public Mutator {
    private:
        int p;
    public:
        BitFlipProb(int prob);
        Individual mutate(Individual i, int k);
};

#endif