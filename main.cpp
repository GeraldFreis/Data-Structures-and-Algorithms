#include <iostream>
#include "Sort.h"
#include "BubbleSort.h"
#include <vector>

int main(){
    std::vector<int> a({1,4,2,6,3,9,8,5});
    Sort *bub = new BubbleSort;
    std::vector<int> returned = bub->sort(a);
    for(auto a: returned){
        std::cout << a << " ";
    }
    std::cout <<  "\n";
}