#include "Tournament.h"

/*
Returns a pointer to a player object who has won
Requirements: The tournament function must randomly select two players which have not played yet
*/
Player *Tournament::run(std::array<Player *, 8> competitors){
    Referee Ref;
    // pair 1 and 3, 2 and 4, 6 and 8, 5 and 7
    int one_counter = 0; int two_counter= 0; int three_counter = 0; int four_counter = 0; int five_counter = 0; int six_counter = 0;
    int seven_counter = 0; int eight_counter = 0;
    
    for(int i = 0; i < 5; i++){
        char game1 = Ref.refGame(competitors.at(0), competitors.at(2));
        char game2 = Ref.refGame(competitors.at(1), competitors.at(3));
        char game3 = Ref.refGame(competitors.at(4), competitors.at(6));
        char game4 = Ref.refGame(competitors.at(5), competitors.at(7));


        if(game1 == 'L'){three_counter++;}
        else if(game1 == 'W'){one_counter++;}
        else if(game1 == 'T'){one_counter++;}

        if(game2 == 'L'){four_counter++;}
        else if(game2 == 'W'){two_counter++;}
        else if(game2 == 'T'){two_counter++;}

        if(game3 == 'L'){seven_counter++;}
        else if(game3 == 'W'){five_counter++;}
        else if(game3 == 'T'){five_counter++;}

        if(game4 == 'L'){eight_counter++;}
        else if(game4 == 'W'){six_counter++;}
        else if(game4 == 'T'){six_counter++;}
    }

    if(one_counter > three_counter){winners.push_back(competitors.at(0));}
    else{winners.push_back(competitors.at(2));}

    if(two_counter > four_counter){winners.push_back(competitors.at(1));}
    else{winners.push_back(competitors.at(3));}

    if(five_counter > seven_counter){winners.push_back(competitors.at(4));}
    else{winners.push_back(competitors.at(6));}

    if(six_counter > eight_counter){winners.push_back(competitors.at(5));}
    else{winners.push_back(competitors.at(7));}

    if(winners.size() > 4){std::cout<<"Too many winners in tournament" << "\n";}

    std::vector<Player* > finals;

    for(int i = 0; i <= 2; i = i + 2){
        winners.at(i)->reset(); winners.at(i+1)->reset();
        int counter_1 = 0; int counter_2 = 0;

        for(int j = 0; j < 5; j++){
            char thiswinner = Ref.refGame(winners.at(i), winners.at(i+1));

            if(thiswinner == 'L'){counter_2++;}
            else if(thiswinner == 'W'){counter_1++;}
            else{counter_1++;}
        }

        if(counter_1 > counter_2){finals.push_back(winners.at(i));}
        else{finals.push_back(winners.at(i+1));}
    }

    
    if(finals.size() > 2){std::cout << "Too many players in the final vector" << "\n";}

    finals.at(0)->reset(); finals.at(1)->reset();
    int counter_1 = 0; int counter_2 = 1;

    for(int i = 0; i < 5; i++){ 
        char winner = Ref.refGame(finals.at(0), finals.at(1));

        if(winner == 'W'){counter_1++;}
        else if(winner == 'L'){counter_2++;}
        else{counter_1++;}
    }

    if(counter_1 > counter_2){return finals.at(1);}
    else{return finals.at(0);}    
}