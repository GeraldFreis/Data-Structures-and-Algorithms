#include <iostream>



int numDup(int arr[], int start, int size, int element){
    int count = 0;
    if(arr[start] == element){count++;}
    if(start == size-1){
        return count;
    }
    start = start + 1;
    return count + numDup(arr, start, size, element); 
}

int main(){
    int arr[] ={1,3,3,4};
    std::cout << numDup(arr, 0, 4, 3) << "\n";
}