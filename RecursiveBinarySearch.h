#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include <vector>

// Recursive binary search class with method search
class RecursiveBinarySearch {
    private:
        bool search(std::vector<int> item_vector, int item_wanted, int left_index, int right_index);
    public:
        bool search(std::vector<int> item_vector, int item_wanted);
};

#endif