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

            while(raw_string.at(i+new_counter) != ' ' && (i+new_counter < raw_string.size()-2)){
                number += raw_string.at(i+new_counter); new_counter++;
            }
            if(number.size() > 0){
                array[counter] = std::stoi(number);
                counter++; i+=number.size();
            }

        }
    }
    int new_counter = 0;
    for(int i = raw_string.size()-1; i >= 0 ;i--){
        if(new_counter == 0){
            if(raw_string.at(i) >= 48 && raw_string.at(i) <= 59){
                int c = 0;
                std::string number;
                while((raw_string.at(i-c) != ' ') && (i-c > 0)){
                    number += raw_string.at(i-c); c++;
                }

                if(number.size() > 0){
                    std::string new_number;
                    for(int i = number.size()-1; i >= 0; i--){new_number += number.at(i);}
                    array[counter] = std::stoi(new_number); counter += 1;
                    // std::cout << array[counter-1] << "\n";
                    new_counter++;
                }
            }
        }
    }
    // passing only proper values back as the array
    int *clean_array = new int[counter];
    for(int i  = 0; i < counter; i++){
        clean_array[i] = array[i];
        // std::cout << clean_array[i] << "\n";
    }
    return clean_array;
}

int size_finder(std::string raw_string){
    int counter = 0;

    for(int i =0; i < raw_string.size()-1; i++){
        if(raw_string.at(i) >= 48 && raw_string.at(i) <=59){
            int c = 0;

            while(raw_string.at(i+c) != ' ' && ((i+c)<raw_string.size()-1)){
                c++;
            }
            counter ++;
            i +=  c;
        }
    }

    return counter;
}

int main(){
    std::string raw_input_string;
    std::getline(std::cin, raw_input_string);

    // std::cout << raw_input_string;
    int *array = reading_array(raw_input_string);

    Polish *pol = new Polish(array, size_finder(raw_input_string));
    pol->printlist();

}