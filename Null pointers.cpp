// Null pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int *pointer = nullptr;

    int x = 123;

    pointer = &x;

    if (pointer == nullptr) {
        std::cout << "pointer assignment unsuccessful" << '\n';
    }
    else {
        std::cout << "pointer assignment successful" << '\n';
        std::cout << *pointer;
    }

    std::cin >> x;
}