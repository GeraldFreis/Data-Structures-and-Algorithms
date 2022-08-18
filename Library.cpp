#include "Library.h"
#include "Document.h"

void Library::addDocument(Document *doc){
    library.push_back(doc);
}

bool Library::hasDocument(Document *doc){
    for(auto value: library){
        if(value->getDocumentID() == doc->getDocumentID()){
            return true;
        }
    }
    return false;
}
