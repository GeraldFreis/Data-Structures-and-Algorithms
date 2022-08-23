#include <iostream>
#include "Reverse.h"
#include "Truckloads.h"

int main(){
    Reverse rev;
    std::cout << rev.reverseString("midget") << "\n";
    Reverse newrev;
    std::cout << newrev.reverseDigit(12345) << "\n";

    Truckloads truck1;
    std::cout << truck1.numTrucks(14, 3) << "\n";
}