// Adding user input to an array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::string foods[5];
    std::string temp = "";

    for (int i = 0; i < sizeof(foods)/sizeof(foods[0]); i++)
    {
        std::cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": ";
        std::cin >> temp;

        if (temp == "q") {
            break;
        }
        else {
            foods[i] = temp;
        }
    }

    std::cout << "You like the following foods:\n";

    for (int i = 0; !foods[i].empty(); i++)
    {
        std::cout << foods[i] << '\n';
    }

    std::cin >> temp;
}
