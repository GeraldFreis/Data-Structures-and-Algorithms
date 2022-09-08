#include <iostream>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"


int main(){
    Individual indie("01010");

    std::cout << indie.getString() << "\n";
}