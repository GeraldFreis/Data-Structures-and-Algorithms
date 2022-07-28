#include "game_manager.h"

GameManager::GameManager(){
    user = new Human();
    computer = new Computer();
}

void GameManager::main_loop(){
    bool game_ended = false;

    while(game_ended != true){
        srand( time (NULL));

        user->choose_move();
        computer->choose_move();

        ref.check_winner(user, computer);
        std::cout << "\n" << "you played: " << user->get_move() << " The computer played: " << computer->get_move() << "\n";
        if(ref.get_winner() != "draw"){
            std::cout << "The winner is: "<<ref.get_winner() << "\n";

            std::cout << "Would you like to continue playing? (Y for yes || N for no)\n";
            char command;
            std::cin >> command;
            if(command == 'N' || command == 'n'){game_ended = true;}
        }
        else {
            std::cout << "The game was a draw, GAME restarting" << "\n";
        }
    }
}

GameManager::~GameManager(){
    std::cout << "\nGame over\n\n";
    delete user;
    delete computer;
}