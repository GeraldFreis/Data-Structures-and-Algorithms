#include "InterpretingEquation.h"
#include <iostream>


void InterpretingEquation::calculate_equation(char *command_array, int command_amount, int *numbers, int numbers_amount){
    // we take the command array, and then check size, and compute equation
    if(command_amount == 1){
        equation += std::to_string(numbers[0]); equation += " ";
        equation += command_array[0]; equation += " ";
        equation += std::to_string(numbers[1]);
    } else {
        if(command_amount >= 2){
            equation += std::to_string(numbers[0]); equation += " ";
            equation += command_array[0]; equation += " ";
            equation += std::to_string(numbers[1]); ;

            for(int i = 2; i <= command_amount; i++){
                if(command_array[i-1] == '*' || command_array[i-1] == '/'){
                    std::string newstring = "(";
                    newstring += equation;
                    equation = newstring;
                    if(equation[equation.size()-1] == ' '){equation.at(equation.size()-1) = ')'; equation += " ";}
                    else {
                        equation += ") ";
                    }
                }
                if(equation.at(equation.size()-1) != ' '){equation += " ";}
                equation += command_array[i-1];
                equation += " ";
                equation += std::to_string(numbers[i]); 
                if(i!= command_amount){equation += " ";}
            } 
        }
    }
};
int InterpretingEquation::index_of_first_num(std::string raw_string){
    for(int i = 0; i < raw_string.size(); i++){
        if(raw_string.at(i) >= 48 && raw_string.at(i) <= 59){
            return i;
        }
    }
    return -1;
}
void InterpretingEquation::print_equation(){
    std::cout << equation;
}

std::string InterpretingEquation::get_equation(){
    return equation;
}

// dividing the string into the array
int *InterpretingEquation::reading_array(std::string raw_string){
    int *array = new int[100]; int counter = 0;

    for(int i = 0; i < raw_string.size()-1; i++){

        if((raw_string.at(i) > 47 && raw_string.at(i) < 60)){
            int new_counter = 0; // keeping track of where we are in the array
            std::string number;

            while(raw_string.at(i+new_counter) != ' ' && (i+new_counter < raw_string.size()-2)){
                number += raw_string.at(i+new_counter); new_counter++;
            }
            if(number.size() > 0){
                if(i != 0 && raw_string.at(i-1) != '-'){
                    array[counter] = std::stoi(number);
                    counter++; i+=number.size();
                }else {
                    std::string newnum = "-"; newnum += number;
                    array[counter] = std::stoi(newnum);
                    counter++; i+= number.size();
                }
            }

        }
    }
    if(raw_string.at(raw_string.size()-2) == ' '){array[counter] = raw_string.at(raw_string.size()-1)-48; counter++;}
    else if(raw_string.at(raw_string.size()-3) == ' '){std::string num; num += raw_string.at(raw_string.size()-2); num += raw_string.at(raw_string.size()-1);
    array[counter] = std::stoi(num); counter++;}
    else{
        int new_counter = 0;
        for(int i = raw_string.size()-1; i >= 0 ;i--){
            if(new_counter == 0){
                if(raw_string.at(i) > 47 && raw_string.at(i) < 60){
                    int c = 0;
                    std::string number;
                    while((raw_string.at(i-c) != ' ') && (i-c >= 0)){
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
    }
    // passing only proper values back as the array
    int *clean_array = new int[counter];
    for(int i  = 0; i < counter; i++){
        clean_array[i] = array[i];
    
        // std::cout << clean_array[i] << "\n";
    }
    return clean_array;
}

int InterpretingEquation::size_finder(std::string raw_string){
    int counter = 0;

    for(int i =0; i < raw_string.size(); i++){
        if(raw_string.at(i) >= 48 && raw_string.at(i) <= 59){
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

// function to derive the order of the operators given
char *InterpretingEquation::commands(std::string raw_input){
    char *original_command_array = new char[100]; // giving space for 100 commands
    int counter=0;

    // for(int i = raw_input.size()-1; i >= 0; i--){
    //     if(raw_input.at(i) == '*' || raw_input.at(i) == '+' || raw_input.at(i) == '-' || raw_input.at(i) == '/'){
    //         original_command_array[counter] = raw_input.at(i); counter++;
    //     }   
    // }
    for(int i = index_of_first_num(raw_input); i >= 0; i--){
        if(raw_input.at(i)== '*' || raw_input.at(i) == '+' || (raw_input.at(i) == '-' && i != raw_input.size()-1 && raw_input.at(i+1) == ' ') || raw_input.at(i) == '/'){
             original_command_array[counter] = raw_input.at(i); counter++;
         }
    }
    for(int i = index_of_first_num(raw_input)+1; i < raw_input.size();i++){
        if(raw_input.at(i) == '*' || raw_input.at(i) == '+' || raw_input.at(i) == '-' || raw_input.at(i) == '/'){
            original_command_array[counter] = raw_input.at(i); counter++;
        }   
    }


    char *new_array = new char[counter];
    for(int i = 0; i < counter; i++){new_array[i] = original_command_array[i];}
    delete [] original_command_array;
    return new_array;
}

int InterpretingEquation::commands_amount(std::string raw_input){
    char *original_command_array = new char[100]; // giving space for 100 commands
    int counter=0;

    for(int i = raw_input.size()-1; i >= 0; i--){
        if(raw_input.at(i) == '*' || raw_input.at(i) == '+' || raw_input.at(i) == '-' || raw_input.at(i) == '/'){
            counter++;
        }   
    }
    return counter;
}