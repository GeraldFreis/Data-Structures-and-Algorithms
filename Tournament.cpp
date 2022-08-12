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
        char game1 = Ref.refGame(competitors.at(1), competitors.at(3));
        char game2 = Ref.refGame(competitors.at(2), competitors.at(4));
        char game3 = Ref.refGame(competitors.at(5), competitors.at(7));
        char game4 = Ref.refGame(competitors.at(6), competitors.at(8));


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

    if(one_counter > three_counter){winners.push_back(competitors.at(1));}
    else{winners.push_back(competitors.at(3));}

    if(two_counter > four_counter){winners.push_back(competitors.at(2));}
    else{winners.push_back(competitors.at(4);)}

    if(five_counter > seven_counter){winners.push_back(competitors.at(5));}
    else{winners.push_back(competitors.at(7));}

    if(six_counter > eight_counter){winners.push_back(competitors.at(6));}
    else{winners.push_back(competitors.at(8));}

    if(winners.size() > 4){std::cout<<"Too many winners in tournament" << "\n";}

    
    return competitors.at(1);
}