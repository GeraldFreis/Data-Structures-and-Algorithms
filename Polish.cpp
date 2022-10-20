#include "Polish.h"
#include <iostream>

Polish::Polish(){
    head_node = nullptr;
}

Polish::Polish(int *array, int size){
    Node *previous_node = new Node;
    previous_node->setdata(array[0]); previous_node->setprev(nullptr);
    head_node = previous_node;
    for(int i = 1; i < size; i++){
        Node *new_node = new Node;
        new_node->setdata(array[i]);
        previous_node->setnext(new_node);
        new_node->setprev(previous_node);
        previous_node=new_node;

        if(i == size - 1){
            new_node->setnext(nullptr);
        }
        previous_node=new_node;
    }
}

// multiplies the first two elements in the deque, deletes the second one and makes the first one equal to their sum
void Polish::multiply(){
    int data_1, data_2;
    data_1 = head_node->getdata(); data_2=head_node->getnext()->getdata();
    int result = data_1 * data_2;

    recent_output = result;
    Node *new_head = new Node;
    new_head = head_node->getnext(); new_head->setdata(result);
    new_head->setprev(nullptr);
    head_node = new_head;
}

// divides the first two elements in the list, deletes the second one and makes the first one equal to their product
void Polish::divide(){
    int data_1, data_2;
    data_1 = head_node->getdata(); data_2=head_node->getnext()->getdata();
    int result = data_1 / data_2;
    recent_output = result;
    Node *new_head = new Node;
    new_head = head_node->getnext(); new_head->setdata(result);
    new_head->setprev(nullptr);
    head_node = new_head;
}
// adds the first to the second
void Polish::add(){
    int data_1, data_2;
    data_1 = head_node->getdata(); data_2=head_node->getnext()->getdata();
    int result = data_1 + data_2;
    recent_output = result;

    Node *new_head = new Node;
    new_head = head_node->getnext(); new_head->setdata(result);
    new_head->setprev(nullptr);
    head_node = new_head;
}
// subtracts the second from the first, deletes the second, makes the product the first
void Polish::subtract(){
    int data_1, data_2;
    data_1 = head_node->getdata(); data_2=head_node->getnext()->getdata();
    int result = data_1 - data_2;
    recent_output = result;
    Node *new_head = new Node;
    new_head = head_node->getnext(); new_head->setdata(result);
    new_head->setprev(nullptr);
    head_node = new_head;       
}

void Polish::printlist(){
    Node *current_node = head_node;

    while(current_node != nullptr){
        std::cout << current_node->getdata();
        current_node = current_node->getnext();
        if(current_node != nullptr){std::cout << " ";}
        else{std::cout <<  "\n"; }
    }
}

void Polish::printEquation(){
    std::cout << " = " << recent_output;
}

Polish::~Polish(){
    while(head_node != nullptr){
        Node *new_node = head_node->getnext();
        delete head_node;
        head_node = new_node;
    }
}

