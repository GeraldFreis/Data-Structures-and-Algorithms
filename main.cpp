#include <iostream>
#include "Library.h"
#include "Document.h"
#include "Book.h"

int main(){
    Library biblioteque;
    Document *doc_1 = new Book(2000); 

    biblioteque.addDocument(doc_1); 
    if(biblioteque.hasDocument(doc_1) == true){ // the subtype polymorphism happens in this function as we call the pure virtual function
        std::cout << "Document exists in library" << "\n";
    }
    else {
        std::cout << "Document does not exist in library" << "\n";
    }

}