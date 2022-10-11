#include "Node.h"

// Node::Node(Node *_nextnode, int _data){
//     nextnode = _nextnode;
//     data = _data;
// };

Node::Node(){
    next = nullptr;
    data = 0;
}

Node *Node::getNext(){
    return next;
};

int Node::getData(){
    return data;
};

void Node::setNext(Node *_nextnode){
    next = _nextnode;
};

void Node::setData(int _data){
    data = _data;
};