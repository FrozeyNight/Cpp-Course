// fill() function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{

    const int SIZE = 100;
    std::string foods[SIZE];

    fill(foods, foods + SIZE, "veggies");
    fill(foods + 4, foods + 5, "name");

    for (std::string food : foods) {
        std::cout << food << '\n';
    }

    int forClosing = 0;

    std::cin >> forClosing;
}
