#include "Node.h"
Node::Node(){
    previous_node = nullptr; next_node = nullptr;
}

void Node::setnodes(Node *prev, Node *next){
    previous_node = prev;
    next_node = next;
}

void Node::setdata(int d){
    data = d;
}

int Node::getdata(){return data;}

Node *Node::getnext(){
    return next_node;
}
Node *Node::getprev(){
    return previous_node;
}

void Node::setnext(Node * next){
    next_node = next;
}
void Node::setprev(Node * prev){
    previous_node = prev;
}

void Node::deletenext(){
    delete next_node;
    next_node = nullptr;
}

void Node::deleteprev(){
    delete previous_node;
    previous_node = nullptr;
}