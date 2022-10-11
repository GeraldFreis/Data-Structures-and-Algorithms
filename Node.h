#ifndef NODE_H
#define NODE_H

class Node {
    private:
        Node *next;
        int data;
    
    public:
        // Node(Node *next_node, int _data);
        Node();

        Node *getNext();
        int getData();

        void setNext(Node *next_node);
        void setData(int _data);
};

#endif