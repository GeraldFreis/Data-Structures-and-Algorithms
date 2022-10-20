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
};

#endif