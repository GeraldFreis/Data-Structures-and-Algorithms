#include "BitFlipProb.h"

BitFlipProb::BitFlipProb(int prob){
    p = prob;
}

Individual BitFlipProb::mutate(Individual i, int k){
    for(int x = 0; x < i.getLength(); x++){
        i.flipBit(x);
    }
    return i;
}