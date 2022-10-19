#include <iostream>
#include <string>

#include "Polish.h"

// dividing the string into the array
int *reading_array(std::string raw_string){
    int *array = new int[100]; int counter = 0;

    for(int i = 0; i < raw_string.size()-1; i++){
        if(raw_string.at(i) >= 48 && raw_string.at(i) <= 59){
            int new_counter = 0; // keeping track of where we are in the array
            std::string number;
            while(raw_string.at(i+new_counter) != ' ' && (i+new_counter < raw_string.size())){
                number += raw_string.at(i+new_counter); new_counter++;
            }
            if(number.size() > 0){
                array[counter] = std::stoi(number);
                counter++;
            }
        }
    }
    // passing only proper values back as the array
    int *clean_array = new int[counter];
    for(int i  = 0; i < counter; i++){
        clean_array[i] = array[i];
    }
    return clean_array;
}

int main(){
    std::string raw_input_string;
    std::getline(std::cin, raw_input_string);

    // std::cout << raw_input_string;
    int *array = reading_array(raw_input_string);

    Polish *pol = new Polish(array, 4);
    pol->printlist();

}