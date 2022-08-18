#ifndef BOOK_H
#define BOOK_H
#include "Document.h"

class Book: public Document {
    public:
        int getDocumentID();
};
#endif