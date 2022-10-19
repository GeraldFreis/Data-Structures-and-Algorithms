#ifndef POLISH_H
#define POLISH_H
#include "Node.h"

class Polish {
    private:
        Node *head_node;
    public:
        Polish();
        Polish(int *array, int size);
        // multiplies the first two elements in the deque, deletes the second one and makes the first one equal to their sum
        void multiply();
        // divides the first two elements in the list, deletes the second one and makes the first one equal to their product
        void divide();
        // adds the first to the second
        void add();
        // subtracts the second from the first, deletes the second, makes the product the first
        void subtract();

        void printlist();
        ~Polish();
};

#endif