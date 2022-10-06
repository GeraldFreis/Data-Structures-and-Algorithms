#include <iostream>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <vector>

int main(){
    std::vector<int> a;
    int val;

    while(std::cin >> val){
        a.push_back(val);
    }
    Sort *quickie = new QuickSort;
    RecursiveBinarySearch recurse;

    a = quickie->sort(a);
    bool ifonein = recurse.search(a, 1);
    if(ifonein == true){std::cout << "true ";}
    else{std::cout << "false ";}

    for(auto b: a){
        std::cout << b << " ";
    }
    std::cout << "\n";
}