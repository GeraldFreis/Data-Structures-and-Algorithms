#include "Reverse.h"
#include <iostream>

int Reverse::reverseDigit(int int_to_reverse){
    #include <string>
    std::string converted_string =  std::to_string(int_to_reverse);
    index = converted_string.length()-1;

    if(index >= 0) {
        reversed_stuffs += (converted_string[index]);
        converted_string.erase(index);
        int_to_reverse = reverseDigit(std::stoi(converted_string));
    } 
    else {
        return std::stoi(reversed_stuffs);
    }
};  

Reverse::Reverse(){
    index = 0;
}

std::string Reverse::reverseString(std::string reverse_string){
    if(reverse_string.length() > 0){
        reversed_stuffs += reverse_string[reverse_string.length()-1];
        reverse_string.erase(reverse_string.length()-1);

        reverseString(reverse_string);
    }
    else{
        return reversed_stuffs;
    }
};