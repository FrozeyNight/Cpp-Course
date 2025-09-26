// Foreach loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::string students[] = {"Adam", "Patrick", "Eve", "John"};

    for (std::string student : students) {
        std::cout << student << '\n';
    }

    std::cin >> students[0];
}
