#include "BitFlip.h"

Individual BitFlip::mutate(Individual i, int k){
    // properly checking and dividing by occurrence
    if(k > i.getLength()){
        int dividend = k / i.getLength();
        k = k - (dividend * i.getLength());
    }
    
    i.flipBit(k);
    return i;
}