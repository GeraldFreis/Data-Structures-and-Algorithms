#include "LinkedList.h"
#include <iostream>


int main(){
    int *given_array = new int[100]; int param1, param2, counter = 0;
    std::string command_string; std::string raw_input_string;
    std::getline(std::cin, raw_input_string); // reading in the data
    // command should always be 5 and 6 from the end
    
    if(raw_input_string[raw_input_string.size() - 6] != 'S' && raw_input_string[raw_input_string.size()-5] != 'S'){
        command_string += raw_input_string[raw_input_string.size()-6];
        command_string += raw_input_string[raw_input_string.size()-5];
    } else {
        command_string += "S";
    }



    for(int i = 0; i < raw_input_string.size()-7; i++){
        if(raw_input_string[i] == ' '){continue;}
        else {
            if(raw_input_string[i+1] != ' ' && raw_input_string[i+1] <= 57){ 
                std::string newstring; 
                newstring += raw_input_string[i];
                newstring+= raw_input_string[i+1];
                // std::cout << newstring << "\n";
                given_array[counter] = std::stoi(newstring); counter++;
                i++;
            }
            else if(raw_input_string[i+1] == ' '){
                // std::cout << raw_input_string[i] << "\n";
                given_array[counter] = raw_input_string[i] - '0'; counter++;
            }
        }
    }
    // std::cout << command_string << "\n";
    param1 = raw_input_string[raw_input_string.size()-3]-'0'; param2 = raw_input_string[raw_input_string.size()-1] - '0';
    // std::cout << param1 << " " << param2 << "\n";
    LinkedList *list =  new LinkedList(given_array, counter);
    if(command_string == "AF"){
        list->addFront(param1);
    } else if(command_string == "AE"){
        list->addEnd(param1);
    } else if(command_string == "AP"){
        list->addAtPosition(param1, param2);
    } else if(command_string == "S"){
        list->search(param1);
    } else if(command_string == "DF"){
        list->deleteFront();
    } else if(command_string == "DE"){
        list->deleteEnd();
    } else if(command_string == "DP"){
        list->deleteAtPosition(param1);
    } else if(command_string == "GI"){
        list->getItem(param1);
    }
    list->printItems();
}