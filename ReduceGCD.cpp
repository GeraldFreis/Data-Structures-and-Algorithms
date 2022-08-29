#include "ReduceGCD.h"
#include <cmath>

int ReduceGCD::binaryOperator(int x, int y){
    if(y != 0){
        return binaryOperator(y, x % y);
    }
    else{
        return x;
    }
}