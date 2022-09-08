#include "BitFlip.h"

Individual BitFlip::mutate(Individual i, int k){
    if(k > i.getLength()){k = i.getLength() - k;}
    i.flipBit(k);
    return i;
}