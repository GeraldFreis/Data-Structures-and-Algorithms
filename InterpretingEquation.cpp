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
        else if(command_amount >= 3){
            equation += "("; equation += std::to_string(numbers[0]); equation += " ";
            equation += command_array[0]; equation += " ";
            equation += std::to_string(numbers[1]); equation += ") ";

            for(int i = 2; i <= command_amount; i++){
                equation += command_array[i-1];
                equation += " ";
                equation += std::to_string(numbers[i]); equation += " ";
            }

        }
    }
};

void InterpretingEquation::print_equation(){
    std::cout << equation;
}

std::string InterpretingEquation::get_equation(){
    return equation;
}