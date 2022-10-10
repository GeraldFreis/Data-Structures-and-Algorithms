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
        std::cout << given_val << " ";
        list->addEnd(given_val);
    }

    std::string command_string;
    std::cin >> command_string;
    
    int other_val_1, other_val_2;
    if(command_string == "AF"){
        std::cin >> other_val_1;
        list->addFront(other_val_1);
    } else if(command_string == "AE"){
        std::cin >> other_val_1;
        list->addEnd(other_val_1);
    } else if(command_string == "AP"){
        int position;
        std::cin >> other_val_1 >> other_val_2;
        std::cout << "\n" << other_val_1 << " " << other_val_2 << "\n";
        list->addAtPosition(other_val_2, other_val_1);
    } else if(command_string == "S"){
        std::cin >> other_val_1;
        list->search(other_val_1);
    } else if(command_string == "DF"){
        list->deleteFront();
    } else if(command_string == "DE"){
        list->deleteEnd();
    } else if(command_string == "DP"){
        std::cin >> other_val_1;
        list->deleteAtPosition(other_val_1);
    } else if(command_string == "GI"){
        std::cin >> other_val_1;
        std::cout << "\n" << other_val_1 << "\n";
        list->getItem(other_val_1);
    }
    list->printItems();
}