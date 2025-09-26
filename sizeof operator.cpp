// sizeof operator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int x = 1;
    std::string name = "Frozey";
    char sign = '+';
    double price = 7.65;
    std::string names[] = {"Patrik", "Adam", "Eve", "Bob"};
    int numbers[] = {1, 6, 2, 4, 6, 1, 0, 2};

    std::cout << sizeof(x) << '\n'; // all of this is in bytes
    std::cout << sizeof(name) << '\n';
    std::cout << sizeof(sign) << '\n';
    std::cout << sizeof(price) << '\n';
    std::cout << sizeof(names) << '\n';
    std::cout << sizeof(names)/sizeof(std::string) << '\n'; // this is how many elements are there
    std::cout << sizeof(numbers) << '\n';
    std::cout << sizeof(numbers)/sizeof(int) << '\n';

    std::cin >> x;
}
