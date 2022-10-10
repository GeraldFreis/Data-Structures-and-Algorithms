#include "Node.h"

Node::Node(Node *_nextnode, int _data){
    nextnode = _nextnode;
    data = _data;
};

Node::Node(){
    nextnode = nullptr;
    data = 0;
}

Node *Node::getNextNode(){
    return nextnode;
};

int Node::getData(){
    return data;
};

void Node::setNextNode(Node *_nextnode){
    nextnode = _nextnode;
};

void Node::setData(int _data){
    data = _data;
};