#include "FilterNonPositive.h"

bool FilterNonPositive::g(int x){
    if(x < 0){return true;}
    return false;
}