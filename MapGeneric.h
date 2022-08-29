#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <vector>

class MapGeneric {
    private:
        virtual int f(int x) = 0;
        std::vector<int> mapped_integers;
    
    public:
        std::vector<int> map(std::vector<int> vec);
};

#endif