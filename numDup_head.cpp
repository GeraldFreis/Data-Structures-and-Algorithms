
int numDup(int arr[], int start, int size, int element){
    if(start < 0){return 0;}
    
    int count = 0;
    if(arr[start] == element){count++;}

    if(start != size-1){
        start = start + 1;
        count += numDup(arr, start, size, element);
        return count;
    }
    return count;
}
