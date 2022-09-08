#include <iostream>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

Individual * execute(Individual * indPtr, Mutator * mPtr, int k){
    Individual individualImgoingtopasstofunctionbecausenopointers = *indPtr;
    Individual *newindividualmeme =  new Individual(1);
    *newindividualmeme = mPtr->mutate(individualImgoingtopasstofunctionbecausenopointers, k);

    return newindividualmeme;
};

int main(){
    std::string s1, s2; int k1, k2;

    std::cin >> s1 >> k1 >> s2 >> k2;
    Individual I1(s1);
    Individual I2(s2);

    Mutator *BitFl = new BitFlip;
    Mutator *Rearr = new Rearrange;

    std::cout << execute(&I1, BitFl, k1)->getString() << " ";
    std::cout << execute(&I2, Rearr, k2)->getString() << " " << execute(&I2, Rearr, k2)->getMaxOnes() << "\n";
}