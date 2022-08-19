#ifndef BOOK_H
#define BOOK_H
#include "Document.h"

class Book: public Document {
    public:
        Book();
        Book(int given_id);
        int getDocumentID();
};
#endif