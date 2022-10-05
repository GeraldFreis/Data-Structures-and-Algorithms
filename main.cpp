#include <iostream>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include <vector>

int main(){
    std::vector<int> a({1,4,2,6,3,9,8,5});
    Sort *bub = new BubbleSort;
    std::vector<int> returned = bub->sort(a);
    for(auto b: returned){
        std::cout << b << " ";
    }
    std::cout <<  "\n";
    
    Sort *quick = new QuickSort;
    std::vector<int> returned_sort = quick->sort(a);

    for(auto b: returned_sort){
        std::cout << b << " ";
    }
    std::cout <<  "\n";
}