#include <iostream>
#include "LinkedList.h"
#include "Node.h"
#include <limits>

LinkedList::LinkedList(){
    head = nullptr;
}


LinkedList::LinkedList(int *array, int size){
    head = new Node; head->setData(array[0]);
    Node *previous_node = head;
    
    for(int i = 1; i < size; i++){
        Node *newnode = new Node;
        newnode->setData(array[i]);
        previous_node->setNext(newnode);
        previous_node = newnode;

        if(i == size-1){
            newnode->setNext(nullptr);
        }
    }
}

LinkedList::~LinkedList(){
    Node *previous_node = head;

    while(previous_node->getNext() != nullptr){
        Node *current_node = previous_node->getNext();
        delete previous_node;
        previous_node = current_node;
    }
}

// create a new node with the info, create capacity for head, make new node head, make it point to head
void LinkedList::addFront(int newitem){
    Node *previous_head = head;
    Node *current_head = new Node;
    current_head->setData(newitem);

    head = current_head;
    head->setNext(previous_head);
}

// create a new node with info, traverse through nodes, assign this node as the next node to that node with a nullptr
void LinkedList::addEnd(int newitem){
    bool sentinel_value = true;
    Node *current_node = head;

    while(sentinel_value == true){

        if(current_node->getNext() == nullptr){
            Node *new_node = new Node;
            new_node->setData(newitem);
            new_node->setNext(nullptr);

            current_node->setNext(new_node);
            return;
        }

        else {
            current_node = current_node->getNext();
        }
    }
}

// create new item node, iterate through nodeset until nullptr, and increment counter, make next node the new nodes next node, make new node next node of current node
void LinkedList::addAtPosition(int position, int newitem){
    if(position <= 1){addFront(newitem);}
    
    int counter = 1;
    Node *current_node = head;

    while(current_node != nullptr){
        if(counter == position-1){
            Node *new_node = new Node;
            new_node->setData(newitem);  
            new_node->setNext(current_node->getNext());
            current_node->setNext(new_node);
            return;
        }
        current_node = current_node->getNext();
        counter++;
    }
    addEnd(newitem);
}

// get ptr to next node, delete head, make head variable the ptr ot the next node
void LinkedList::deleteFront(){
    head = head->getNext(); // overwriting the current head with the next node
}

// iterate untill nullptr, delete node
void LinkedList::deleteEnd(){
    bool sentinel_value = true;
    Node *current_node = head;

    while(sentinel_value == true){
        if(current_node->getNext()->getNext() == nullptr){
            delete current_node->getNext();
            current_node->setNext(nullptr);
            return;
        } else {
            current_node = current_node->getNext();
        }
    }
}

// iterate till nullptr, increment counter, check if counter is position, save next node ptr, delete current node, make previous node next ptr 
void LinkedList::deletePosition(int position){
    if(position < 1){std::cout << "outside range"; return;}
    Node *current_node = head; 
    int counter = 1;
    if(position == 1){deleteFront(); return;}
    while(current_node != nullptr){
        if(counter == position-1){
            Node *ahead_node = current_node->getNext()->getNext();
            current_node->setNext(ahead_node);
            return;
        }
        else {
            current_node = current_node->getNext();
            counter++;
        }
    }
    std::cout << "outside range";
}

// iterate till nullptr check current node, return whatever they want for whatever they need
int LinkedList::search(int item){
    Node *current_node = head;
    int position = 0; int counter = 1;

    while(current_node->getNext() != nullptr){

        if(current_node->getData() == item){
            position = counter; 
            std::cout << position << " ";
            return position;
        }
        current_node = current_node->getNext();
        counter++;
    }

    if(current_node->getData() == item){return counter;}
    return 0;
}

// iterate untill nullptr, increment counter, return node->getData() when counter = position
int LinkedList::getItem(int position){
    int counter = 1; 
    Node *current_node = head;

    while(current_node->getNext() != nullptr){
        if(counter == position){
            // std::cout << "here" << "\n";
            std::cout << current_node->getData() << " ";
            return current_node->getData();
        }
        else {
            // std::cout << counter  << "\n";
            current_node = current_node->getNext();
            counter++; 
        }
    }
    std::cout << std::numeric_limits < int >::max() << " ";
    return std::numeric_limits < int >::max();
}

void LinkedList::printItems(){
    if(head == nullptr){return;}

    Node *previous_node = head;
    while(previous_node->getNext() != nullptr){
        std::cout << previous_node->getData() <<  " ";
        previous_node = previous_node->getNext();
    }
    std::cout << previous_node->getData(); // because the last item is not read out otherwise
}