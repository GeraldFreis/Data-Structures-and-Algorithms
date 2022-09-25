#include <string>

bool ifsame(std::string str1, std::string str2){
    if(str1 == str2){
        return true;
    }
    return false;
}

std::string longest_len_substring(std::string str1, std::string str2){
    std::string longest_common_substring = longest_len_substring(str1, str2);

    // iterating through each character and checking if substring of each character is within the other string, and if it has a greater len than current string we change it
    if(str1.length() > 1 && str2.length() > 1){
        for(int i = 0; i < str1.length(); i++){
            std::string new_str = str1.substr(i);
            if(ifsame(new_str, str2) == true){
                if(longest_common_substring.length() < new_str.length()){
                    longest_common_substring = new_str;
                }
            }
        }
        str1.erase(str1.begin()); str2.erase(str2.begin());
        longest_common_substring = longest_len_substring(str1, str2);
    }
    return longest_common_substring;

}