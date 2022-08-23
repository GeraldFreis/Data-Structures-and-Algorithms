#include "EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numCrates, int loadSize){
    if(numCrates <= 0 || loadSize <= 0){return 0;}
    
     if(numCrates <= loadSize){
        return 1;
    }    
    else {
        int num1, num2;
        if(numCrates % 2 != 0 && numCrates / 2 >= 1){
            double crateAmount = (double)(numCrates);
            num1 = ceil(crateAmount / 2); 
            num2 = floor(crateAmount / 2);            
        }
        else{
            num1 = numCrates / 2; 
            num2 = num1;
        }

        int thistotal = 0; 
        
        if(cratePairs.find(num1) != cratePairs.end()){
            thistotal += cratePairs.at(num1);
        } else {
            int thisval = numTrucks(num1, loadSize);
            cratePairs.insert(std::pair<int, int>(num1, thisval));
            thistotal += thisval;
        }

        if(cratePairs.find(num2) != cratePairs.end()){
            thistotal += cratePairs.at(num2);
        } else {
            int thisval = numTrucks(num2, loadSize);
            cratePairs.insert(std::pair<int, int>(num2, thisval));
            thistotal += thisval;
        }


        // thistotal += numTrucks(num2, loadSize);
        
        return thistotal;
    }
};  