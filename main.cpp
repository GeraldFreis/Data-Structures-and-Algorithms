#include "Node.h"
#include "LinkedList.h"
#include <iostream>
#include <string>


int main(){
    LinkedList *list = new LinkedList;
    int given_val;
    std::cin >> given_val;
    list->addFront(given_val);

    while(std::cin >> given_val){
        list->addEnd(given_val);
    }
    std::string command_string;
    std::cin >> command_string;

    if(command_string == "AF"){
        std::cin >> given_val;
        list->addFront(given_val);
    } else if(command_string == "AE"){
        std::cin >> given_val;
        list->addEnd(given_val);
    } else if(command_string == "AP"){
        int position;
        std::cin >> given_val >> position;
        std::cout << given_val << " " << position << "\n";
        list->addAtPosition(position, given_val);
    } else if(command_string == "S"){
        std::cin >> given_val;
        list->search(given_val);
    } else if(command_string == "DF"){
        list->deleteFront();
    } else if(command_string == "DE"){
        list->deleteEnd();
    } else if(command_string == "DP"){
        std::cin >> given_val;
        list->deleteAtPosition(given_val);
    } else if(command_string == "GI"){
        std::cin >> given_val;
        list->getItem(given_val);
    }
    list->printItems();
}