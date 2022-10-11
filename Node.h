#ifndef NODE_H
#define NODE_H

class Node {
    private:
        Node *nextnode;
        int data;
    
    public:
        // Node(Node *next_node, int _data);
        Node();

        Node *getNextNode();
        int getData();

        void setNextNode(Node *next_node);
        void setData(int _data);
};

#endif