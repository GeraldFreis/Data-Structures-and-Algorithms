#ifndef BITFLIP_H
#define BITFLIP_H
#include "Mutator.h"


class BitFlip: public Mutator{
    public:
        Individual mutate(Individual i, int k);
};

#endif