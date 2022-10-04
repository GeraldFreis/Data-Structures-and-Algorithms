#include "BubbleSort.h"
#include <vector>

bool issorted(std::vector<int> veccie){
    for(int i = 1; i < veccie.size(); i++){
        if(veccie.at(i) < veccie.at(i-1)){
            return false;
        }
    }
    return true;
}

std::vector<int> sort(std::vector<int> list){
    if(issorted(list) == false){
        for(int i = 1; i < list.size(); i++){
            if(list.at(i) < list.at(i-1)){
                int temp = list.at(i);
                list.at(i) = list.at(i-1);
                list.at(i-1) = temp;
            }
        }
        list = sort(list);
    };
    return list;
}