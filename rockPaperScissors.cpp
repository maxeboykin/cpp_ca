//
// Created by Max Boykin on 5/22/22.
//
#include <stdlib.h>
#include <iostream>

void rockPaperScissors() {
//Scissors cuts Paper.
// Paper covers Rock.
// Rock crushes Lizard.
// Lizard poisons Spock.
// Spock smashes Scissors.
// Scissors decapitate Lizard.
// Lizard eats Paper.
// Paper disproves Spock.
// Spock vaporizes Rock.
// (and as it always has) Rock crushes Scissors.

    srand(time(NULL));
    int computer = rand() % 3 + 1;
    int user = 0;

    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";

    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";

    std::cout << "shoot! ";
    std::cin >> user;

    if((user == 1 && computer == 1) || (user == 2 && computer == 2) || (user == 3 && computer == 3)){
        std::cout << "Tie!" << "Computer was " << computer << " and you were " << user << std::endl;
    } else if ((user == 1 && computer == 3) || (user == 2 && computer == 1) || (user == 3 && computer == 2)){
            std::cout << "You beat the computer since it had!" << computer << std::endl;
        } else {
        std::cout << "Computer won since it had " << computer << " and you had " << user << std::endl;
    }

    return;
}