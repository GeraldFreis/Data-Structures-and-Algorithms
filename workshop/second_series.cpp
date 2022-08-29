#include <iostream>

double returning_division(int i, int n){
    if(n == i){
        return (double((double(n) / double(n+1))));
    }
    else{
        return returning_division(i, n+1);

    }
};

int main(){
    std::cout << returning_division(3, 0) << "\n";
}