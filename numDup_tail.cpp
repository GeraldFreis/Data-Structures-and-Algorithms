#include <iostream>



int numDup(int arr[], int start, int size, int element){
    if(start < 0){return 0;}

    if(start == size-1){
        return 0;
    }
    int count = 0;

    if(arr[start] == element){
        count++;
        start += 1;
        return count + numDup(arr, start, size, element);
    }

    start = start + 1;
    return numDup(arr, start, size, element); 
}