#include <iostream>
extern int numDup(int arr[], int start, int size, int element);

int main(){
    int arr[] = {1, 3, 3, 5, 6};
    std::cout << numDup(arr, 0, 5, 3) << "\n";
}