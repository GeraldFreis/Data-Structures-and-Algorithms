#ifndef NODE_H
#define NODE_H

class Node {
    private:
        int data;
        Node *previous_node;
        Node *next_node;
    
    public:
        Node();
        void setnodes(Node *prev, Node *next);
        Node *getnext();
        Node *getprev();

        void setdata(int d);
        int getdata();

        void setnext(Node *next);
        void setprev(Node *prev);

        void deletenext();
        void deleteprev();
};

#endif