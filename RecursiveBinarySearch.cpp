#include "RecursiveBinarySearch.h"
#include <vector>


bool RecursiveBinarySearch::search(std::vector<int> item_vector, int item_wanted, int left_index, int right_index){
    if(item_vector.at(right_index) == item_wanted || item_vector.at(left_index) == item_wanted){
        return true;
    }
    if(left_index == item_vector.size()-1 || right_index == 1){
        return false;
    }

    if(item_vector.at(right_index) > item_wanted){
        return search(item_vector, item_wanted, left_index, int(right_index/2));
    }
    if(item_vector.at(right_index) < item_wanted && right_index <= item_vector.size()-1){
        return false;
    }
    if(item_vector.at(left_index) > item_wanted && left_index!=0){
        return search(item_vector, item_wanted, int(left_index/2), right_index);
    }

    return false;
}

// recursively searching
bool RecursiveBinarySearch::search(std::vector<int> items, int wanted_item){
    if(search(items, wanted_item, 0, items.size()-1) == true){
        return true;
    }
    return false;
}