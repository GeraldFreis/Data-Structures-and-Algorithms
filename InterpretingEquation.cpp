#include "InterpretingEquation.h"
#include <iostream>


void InterpretingEquation::calculate_equation(char *command_array, int command_amount, int *numbers, int numbers_amount){
    // we take the command array, and then check size, and compute equation
    if(command_amount == 1){
        equation += std::to_string(numbers[0]); equation += " ";
        equation += command_array[0]; equation += " ";
        equation += std::to_string(numbers[1]);
    } else {
        if(command_amount == 2){
            equation += "("; equation += std::to_string(numbers[0]); equation += " ";
            equation += command_array[0]; equation += " ";
            equation += std::to_string(numbers[1]); equation += ") "; 

            equation += command_array[1]; equation += " ";
            equation += std::to_string(numbers[2]);
        }
    }
};

void InterpretingEquation::print_equation(){
    std::cout << equation;
}

std::string InterpretingEquation::get_equation(){
    return equation;
}