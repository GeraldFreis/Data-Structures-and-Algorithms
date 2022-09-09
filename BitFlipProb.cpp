#include "BitFlipProb.h"

BitFlipProb::BitFlipProb(int prob){
    p = prob;
}

BitFlipProb::BitFlipProb(){
    p = 0;
}

Individual BitFlipProb::mutate(Individual i, int k){
    for(int x = 0; x < i.getLength(); x++){
        i.flipBit(x);
    }
    return 0;
}