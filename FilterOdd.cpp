#include "FilterOdd.h"

bool FilterOdd::g(int x){
    if(x % 2 != 0){
        return true;
    }
    return false;
}