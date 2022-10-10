#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList {
    private:
        Node *head;
    
    public:
        LinkedList();
        LinkedList(int size);
        ~LinkedList();

        void addFront(int newitem);
        void addEnd(int newitem);
        void addAtPosition(int position, int newitem);
        
        void deleteFront();
        void deleteEnd();
        void deleteAtPosition(int position);
        
        int search(int item);
        int getItem(int position);
        void printItems();
};

#endif