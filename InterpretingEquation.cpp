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
                equation += command_array[i-1];
                equation += " ";
                equation += std::to_string(numbers[i]); 
                if(i!= command_amount){equation += " ";}
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