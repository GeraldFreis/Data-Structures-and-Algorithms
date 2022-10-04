#ifndef SORT_H
#define SORT_H
#include <vector>

// abstract base Sort class has function sort returning sorted vector and taking in a vector
class Sort {
    public:
        virtual std::vector<int> sort(std::vector<int> list) = 0;
};

#endif