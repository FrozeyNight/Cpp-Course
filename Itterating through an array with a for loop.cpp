// Itterating through an array with a for loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::string students[] = {"Patrick", "Adam", "Eve", "Edward"};

    for (int i = 0;i < sizeof(students) / sizeof(std::string);i++) {
        std::cout << students[i] << '\n';
    }

    std::cin >> students[0];
}

