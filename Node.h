#ifndef NODE
#define NODE

class Node {
    private:
        Node *nextnode;
        int data;
    
    public:
        Node(Node *nextnode, int _data);
        Node();
        Node *getNextNode();
        int getData();

        void setNextNode(Node *nextnode);
        void setData(int _data);
};

#endif