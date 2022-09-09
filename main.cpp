#include <iostream>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

Individual * execute(Individual * indPtr, Mutator * mPtr, int k){
    Individual *newindividualmeme =  new Individual(10);
    if(k != 0){k = k-1;}

    *newindividualmeme = mPtr->mutate(*indPtr, k);

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
    Individual *output2 = execute(&I2, Rearr, k2);
    std::cout << output2->getString() << " " << execute(&I2, Rearr, k2)->getMaxOnes();
}