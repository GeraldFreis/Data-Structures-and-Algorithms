

int numDup(int arr[], int start, int size, int element) {
    int dups = 0;
  if(start < size-1){
    if(arr[start] == element){
        dups = 1 + numDup(arr, start++, size, element);
        return dups;
    }
    else{
        dups = numDup(arr, start++, size, element);
        return dups;
    }
  }
  return dups;
}
// what does this thing do? | it counts how often an element occurs

#include <iostream>
int main(){
    int array[] = {1,2,3,4};
    std::cout << numDup(array, 0, 4, 2) << "\n";
}
