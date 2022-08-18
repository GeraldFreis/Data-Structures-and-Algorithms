#ifndef LIBRARY_H
#define LIBRARY_H
#include "Document.h"
#include <vector>

class Library {
    private:
        std::vector<Document*> library;
    
    public:
        void addDocument(Document *doc);
        bool hasDocument(Document *doc);

};

#endif