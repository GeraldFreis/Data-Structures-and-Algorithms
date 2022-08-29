#include <iostream>
#include <math.h>

int computingxn(int x, int n){
    if(n != 0){
        return (x * computingxn(x, n-1));
    }
    else {
        return 1;
    }

}

int main(){
    std::cout << computingxn(20, 2) << "\n";
}