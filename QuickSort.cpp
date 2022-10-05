#include "QuickSort.h"
#include <vector>
#include <iostream>
// how quick sort works:
/*
    if range is smaller than 2 elements return immediately after checking if they are in ascending order
    if not:
        pivot on 3rd elemnt in range
        move all elements less than the pivot to its left and all those to its right
        recursively call the function on the three first elements and those after it in two separate calls
*/
std::vector<int> QuickSort::sort(std::vector<int> list){
    int pivot = 0;

    if(list.size() == 1){
        return list;
    }

    else if(list.size() == 2){
        if(list.at(0) > list.at(1)){
            int tempval = list.at(0);
            list.at(0) = list.at(1);
            list.at(1) = tempval;
        }
        return list;
    }
    if(list.size() == 3){return list;}
    pivot = list.at(2);
    // moving all items less than the pivot into a new vector, and all those greater into a different vector
    std::vector<int> less_vector, greater_vector;
    
    for(auto a: list){
        if(a < pivot){less_vector.push_back(a);}
        else {greater_vector.push_back(a);}
    } 
    less_vector.push_back(pivot);
    
    for(auto a: greater_vector){
        less_vector.push_back(a);
    } // adding all values from greater into the less
    
    std::vector<int> subrange_vector, post_range_vector;
    for(int i = 0; i < less_vector.size(); i++){
        if(i < 3){
            subrange_vector.push_back(less_vector.at(i));
        }
        else {
            post_range_vector.push_back(less_vector.at(i));
        }
        std::cout << less_vector.at(i) << " ";
    }
    std::cout << std::endl;
    std::vector<int> returnlist_low, returnlist_high;
    returnlist_low = sort(subrange_vector);
    returnlist_high = sort(post_range_vector);

    for(auto a: returnlist_high){
        returnlist_low.push_back(a);
    }
    return returnlist_low;
}