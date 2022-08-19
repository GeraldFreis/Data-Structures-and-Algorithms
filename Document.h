#ifndef DOCUMENT_H
#define DOCUMENT_H

class Document {
    protected:
        int documentID;
    
    public:
        Document();
        Document(int given_id);
        virtual int getDocumentID() = 0;

};

#endif