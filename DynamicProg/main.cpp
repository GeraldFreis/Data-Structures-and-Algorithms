#include <iostream>
#include <string>

extern std::string longest_len_substring(std::string str1, std::string str2);
int main(){
    std::cout << longest_len_substring("ABCBDAB", "BDCABA") << "\n";
}