#include "LinkedList.h"
#include <iostream>


LinkedList::LinkedList(){
    head = new Node;
    head->setData(0);
};

LinkedList::LinkedList(int size){
    head = new Node; head->setData(0);
    Node *previous_node;
    previous_node = head;

    for(int i = 0; i < size; i++){
        Node *newnode = new Node;
        newnode->setData(i);
        previous_node->setNextNode(newnode);
        previous_node = newnode;
        if(i == size-1){ // setting the last node as a nullptr
            newnode->setNextNode(nullptr);
        }
    }

};

LinkedList::LinkedList(int *array, int size){
    head = new Node(); head->setData(array[0]);
    Node *previous_node = head;
    
    for(int i = 1; i < size; i++){
        Node *newnode = new Node;
        newnode->setData(array[i]);
        previous_node->setNextNode(newnode);
        previous_node = newnode;

        if(i == size-1){
            newnode->setNextNode(nullptr);
        }
    }
}

LinkedList::~LinkedList(){
    Node *previous_node = head;

    while(previous_node->getNextNode() != nullptr){
        Node *current_node = previous_node->getNextNode();
        delete previous_node;
        previous_node = current_node;
    }
};

// create a new node with the info, create capacity for head, make new node head, make it point to head
void  LinkedList::addFront(int newitem){
    Node *previous_head = head;
    Node *current_head = new Node;
    current_head->setData(newitem);

    head = current_head;
    head->setNextNode(previous_head);
};

// create a new node with info, traverse through nodes, assign this node as the next node to that node with a nullptr
void  LinkedList::addEnd(int newitem){
    bool sentinel_value = true;
    Node *current_node = head;

    while(sentinel_value == true){

        if(current_node->getNextNode() == nullptr){
            Node *new_node = new Node;
            new_node->setData(newitem);
            new_node->setNextNode(nullptr);

            current_node->setNextNode(new_node);
            // std::cout << new_node->getData() << "\n";
            sentinel_value = false;
        }

        else {
            current_node = current_node->getNextNode();
        }
    }
};

// create new item node, iterate through nodeset until nullptr, and increment counter, make next node the new nodes next node, make new node next node of current node
void  LinkedList::addAtPosition(int position, int newitem){
    if(position == 0){return;}
    int counter = 1;
    Node *current_node = head;

    while(current_node->getNextNode() != nullptr){
        if(counter == position){
            Node *new_node = new Node;
            new_node->setData(newitem);  
            new_node->setNextNode(current_node->getNextNode());
            current_node->setNextNode(new_node);
            return;
        }
        current_node = current_node->getNextNode();
        counter++;
    }
};

// get ptr to next node, delete head, make head variable the ptr ot the next node
void  LinkedList::deleteFront(){
    head = head->getNextNode(); // overwriting the current head with the next node
};

// iterate untill nullptr, delete node
void  LinkedList::deleteEnd(){
    bool sentinel_value = true;
    Node *current_node = head;

    while(sentinel_value == true){
        if(current_node->getNextNode() == nullptr){
            delete current_node;
            sentinel_value = false;
        } else {
            current_node = current_node->getNextNode();
        }
    }
};

// iterate till nullptr, increment counter, check if counter is position, save next node ptr, delete current node, make previous node next ptr 
void  LinkedList::deleteAtPosition(int position){
    Node *current_node = head; 
    int counter = 1;

    while(current_node->getNextNode() != nullptr){
        if(counter == position-1){
            Node *ahead_node = current_node->getNextNode()->getNextNode();
            current_node->setNextNode(ahead_node);
            return;
        }
        else {
            current_node = current_node->getNextNode();
            counter++;
        }
    }
};

// iterate till nullptr check current node, return whatever they want for whatever they need
int  LinkedList::search(int item){
    Node *current_node = head;
    int position = 0; int counter = 1;

    while(current_node->getNextNode()!=nullptr){

        if(current_node->getData() == item){
            position = counter; 
            std::cout << position << " ";
            return position;
        }
        current_node = current_node->getNextNode();
        counter++;
    }
    return 0;
};

// iterate untill nullptr, increment counter, return node->getData() when counter = position
int  LinkedList::getItem(int position){
    int counter = 1; 
    Node *current_node = head;

    while(current_node->getNextNode() != nullptr){
        if(counter == position){
            // std::cout << "here" << "\n";
            std::cout << current_node->getData() << " ";
            return current_node->getData();
        }
        else {
            // std::cout << counter  << "\n";
            current_node = current_node->getNextNode();
            counter++; 
        }
    }
    return 0;
};

void  LinkedList::printItems(){
    Node *previous_node = head;
    while(previous_node->getNextNode() != nullptr){
        std::cout << previous_node->getData() <<  " ";
        previous_node = previous_node->getNextNode();
    }
    std::cout << previous_node->getData();
};