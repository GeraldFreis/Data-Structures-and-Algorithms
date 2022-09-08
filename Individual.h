#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include <string>
#include <vector>
#include <iostream>


class Individual {
    private:
        std::vector<int> binaryRepresentation;
        
    public:
        Individual(int binaryLength);
        Individual(std::string binary);

        std::string getString();
        int getBit(int pos);
        void flipBit(int pos);
        int getMaxOnes();
        int getLength();

};

#endif