#include "Book.h"

int Book::getDocumentID(){
    return this->documentID;
}

Book::Book(){
    this->documentID = 0;
}

Book::Book(int given_id): Document(given_id){
    this->documentID = given_id;
}