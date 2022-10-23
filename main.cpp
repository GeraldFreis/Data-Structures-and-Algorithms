#include <iostream>
#include <string>

#include "Polish.h"
#include "InterpretingEquation.h"

int main(){
    std::string raw_input_string;
    std::getline(std::cin, raw_input_string);
    if(raw_input_string.size() <= 3){std::cout << "Error"; return 0;}
    InterpretingEquation EquationFinder;
    // std::cout << raw_input_string;
    int *array = EquationFinder.reading_array(raw_input_string);
    if(EquationFinder.size_finder(raw_input_string)<2){std::cout << "Error"; return 0;}
    for(int i = 0; i < EquationFinder.size_finder(raw_input_string); i++){
        if(array[i] > 99 || array[i] < 0){std::cout << "Error"; return 0;}
    }

    Polish *pol = new Polish(array, EquationFinder.size_finder(raw_input_string));

    char *command_array = EquationFinder.commands(raw_input_string);

    if(EquationFinder.commands_amount(raw_input_string) >= EquationFinder.size_finder(raw_input_string)){std::cout << "Error"; return 0;}
    if(EquationFinder.commands_amount(raw_input_string) < EquationFinder.size_finder(raw_input_string)-1){std::cout << "Error"; return 0;}
    if(EquationFinder.commands_amount(raw_input_string) == 0){std::cout << "Error"; return 0;}
    if(EquationFinder.size_finder(raw_input_string) <= 1){std::cout << "Error"; return 0;}
    
    for(int i = 0; i < EquationFinder.commands_amount(raw_input_string); i++){
        if(command_array[i] == '*'){pol->multiply();}
        else if(command_array[i] == '/'){pol->divide();}
        else if(command_array[i] == '-'){pol->subtract();}
        else if(command_array[i] == '+'){pol->add();}
    }
    EquationFinder.calculate_equation(command_array, EquationFinder.commands_amount(raw_input_string), array, EquationFinder.size_finder(raw_input_string));
    EquationFinder.print_equation();
    pol->printEquation();
}