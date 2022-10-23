#ifndef INTERPRETINGEQUATION_H
#define INTERPRETINGEQUATION_H
#include <string>

class InterpretingEquation {
    private:
        std::string equation;
    public:
        void calculate_equation(char *command_array, int command_amount, int *numbers, int numbers_amount);
        void print_equation();
        std::string get_equation();

        int *reading_array(std::string raw_string);
        int size_finder(std::string raw_string);
        char *commands(std::string raw_string);
        int commands_amount(std::string raw_string);
        int index_of_first_num(std::string raw_string);
};

#endif