#ifndef DOCUMENT_H
#define DOCUMENT_H

class Document {
    protected:
        int documentID;
    
    public:
        virtual int getDocumentID() = 0;

};

#endif