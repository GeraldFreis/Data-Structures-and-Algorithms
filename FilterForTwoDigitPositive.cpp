#include "FilterForTwoDigitPositive.h"

bool FilterForTwoDigitPositive::g(int x){
    if(x >= 10 && x <= 99){return true;}
    return false;
}