#include <iostream>
#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"

int main(){
    Reverse rev;
    Reverse newrev;
    Truckloads truck1;
    EfficientTruckloads eff;

    int i; std::string s; int numCrates, loadSize;

    std::cin >> i >> s >> numCrates >> loadSize;

    int reversed_value = rev.reverseDigit(i);
    if(reversed_value == -1){std::cout << "ERROR" << " ";}
    else{std::cout << reversed_value << " ";}


    std::cout << newrev.reverseString(s) << " ";
    int truck1_value = truck1.numTrucks(numCrates, loadSize);
    int efficient_truck_value = eff.numTrucks(numCrates, loadSize);

    if(truck1_value == 0){std::cout << "ERROR" << " ";}
    else{std::cout << truck1_value << " ";}

    if(efficient_truck_value == 0){std::cout << "ERROR" << "\n";}
    else{std::cout << efficient_truck_value << "\n";}
}