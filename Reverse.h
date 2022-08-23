#ifndef REVERSE_H
#define REVERSE_H
#include <string>

// Reversing recursively class
class Reverse {
    private:
        int index;
        std::string reversed_stuffs;
    public:
        Reverse();
        std::string reverseString(std::string reversable_string);
        int reverseDigit(int reverse_int);
};

#endif