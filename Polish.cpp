#include "Polish.h"

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
    
}
// divides the first two elements in the list, deletes the second one and makes the first one equal to their product
void Polish::divide(){

}
// adds the first to the second
void Polish::add(){

}
// subtracts the second from the first, deletes the second, makes the product the first
void Polish::subtract(){

}

Polish::~Polish(){

}

