// Banking Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void showBalance(double balance);
double depositMoney(double balance);
double withdrawMoney(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do {
        std::cout << "****************************************\n";
        std::cout << "Enter your choice: \n";
        std::cout << "1. Show Balance \n";
        std::cout << "2. Deposit Money \n";
        std::cout << "3. Withdraw Money \n";
        std::cout << "4. Exit \n";

        std::cin >> choice;
        std::cin.clear();
        //fflush(stdin); this doesn't work for some reason
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += depositMoney(balance);
                showBalance(balance);
                break;
            case 3:
                balance -= withdrawMoney(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout << "Thank you for visiting!\n";
                break;
            default:
                std::cout << "The choice you entered was invalid\n";
                break;
        }
    } while (choice != 4);

    std::cout << "****************************************\n";
    std::cin >> choice;
}
void showBalance(double balance) {
    std::cout << "Your current balance is: " << balance << '$' << '\n';
}

double depositMoney(double balance) {

    double amount = 0;
    std::cout << "How much money would you like to deposit: ";
    std::cin >> amount;

    if (amount < 1) {
        std::cout << "The amount of money to deposit was invalid\n";
        return 0;
    }

    return amount;
}

double withdrawMoney(double balance) {

    double amount = 0;
    std::cout << "How much money would you like to withdraw: ";
    std::cin >> amount;

    if (amount < 1) {
        std::cout << "The amount of money to withdraw was invalid\n";
        return 0;
    }
    else if (amount > balance) {
        std::cout << "Not enough money in your account to withdraw that much\n";
        return 0;
    }

    return amount;
}

