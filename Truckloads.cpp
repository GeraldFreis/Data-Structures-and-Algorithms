#include "Truckloads.h"


int Truckloads::numTrucks(int numCrates, int loadSize){
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
        
        thistotal += numTrucks(num1, loadSize);
        thistotal += numTrucks(num2, loadSize);
        
        return thistotal;
    }
};