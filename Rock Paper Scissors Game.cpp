// Rock Paper Scissors Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

char getPlayerChoice();
void showPlayerChoice(char player);
char getComputerChoice();
void chooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;

    std::cout << "ROCK PAPER SCISSORS GAME\n";
    std::cout << "************************\n";
    player = getPlayerChoice();
    showPlayerChoice(player);
    computer = getComputerChoice();
    chooseWinner(player, computer);
    std::cout << "************************\n";

    std::cin >> player;
}

char getPlayerChoice() {
    
    char player;

    do {
        std::cout << "Choose one of the following:\n";
        std::cout << "type 'r' for rock\n";
        std::cout << "type 'p' for paper\n";
        std::cout << "type 's' for scissors\n";

        std::cin >> player;
    } while(player != 'r' && player != 'p' && player != 's');

    return player;
}
void showPlayerChoice(char player) {
    switch (player) {
        case 'r':
            std::cout << "Your choice: Rock\n";
            break;
        case 'p':
            std::cout << "Your choice: Paper\n";
            break;
        case 's':
            std::cout << "Your choice: Scissors\n";
            break;
    }
}
char getComputerChoice() {
    
    char computer;
    int choice;

    srand(time(NULL));

    choice = rand() % 3 + 1;

    switch (choice) {
        case 1:
            std::cout << "Computer's choice: Rock\n";
            return 'r';
            break;
        case 2:
            std::cout << "Computer's choice: Paper\n";
            return 'p';
            break;
        case 3:
            std::cout << "Computer's choice: Scissors\n";
            return 's';
            break;
    }

    return 'NULL';

}
void chooseWinner(char player, char computer) {
    switch(player){
        case 'r':
            if (computer == 'r') {
                std::cout << "It's a tie!\n";
                break;
            }
            else if (computer == 'p') {
                std::cout << "You lose!\n";
                break;
            }
            else {
                std::cout << "You win!\n";
                break;
            }
        case 'p':
            if (computer == 'r') {
                std::cout << "You win!\n";
                break;
            }
            else if (computer == 'p') {
                std::cout << "It's a tie!\n";
                break;
            }
            else {
                std::cout << "You lose!\n";
                break;
            }
        case 's':
            if (computer == 'r') {
                std::cout << "You lose!\n";
                break;
            }
            else if (computer == 'p') {
                std::cout << "You win!\n";
                break;
            }
            else {
                std::cout << "It's a tie!\n";
                break;
            }

    }
}


