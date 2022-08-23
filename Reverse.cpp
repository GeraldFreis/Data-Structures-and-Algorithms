#include "Reverse.h"
#include <iostream>

int Reverse::reverseDigit(int int_to_reverse){
    #include <string>
    std::string converted_string =  std::to_string(int_to_reverse);
    // return std::stoi(converted_string);
    index = converted_string.length()-1;
    if(index > 0) {
            reversed_stuffs += (converted_string[index]);
            // std::cout << reversed_stuffs << "\n";
            converted_string[index] = '\0';
            int_to_reverse = reverseDigit(std::stoi(converted_string));
    } else if(index == 0){reversed_stuffs += converted_string[index]; return std::stoi(reversed_stuffs);}
    return std::stoi(reversed_stuffs);
};  

Reverse::Reverse(){
    index = 0;
    reversed_stuffs.clear();
}

std::string Reverse::reverseString(std::string reverse_string){
    if(reverse_string.length() > 0){
        reversed_stuffs += reverse_string[reverse_string.length()-1];
        reverse_string.erase(reverse_string.length()-1);
        reverse_string = reverseString(reverse_string);
    }
    return reversed_stuffs;
};