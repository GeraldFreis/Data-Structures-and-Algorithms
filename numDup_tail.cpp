#include <iostream>

int numDup(int arr[], int start, int size, int element) {
    if(start == size-1){
        return 0;
    } 
    if(arr[start] == element){
        return 1+numDup(arr, start++, size, element);
    }
    else {
        return numDup(arr, start++, size, element);
    }
}

int main(){
    int array[] = {1,2,3,4,5,6,6};
    std::cout << numDup(array, 0, 7, 6) << "\n";
}