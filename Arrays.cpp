// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::string cars[3];

    cars[0] = "Honda Sivic";
    cars[1] = "Corvett";
    cars[2] = "Mustang";

    std::cout << cars[0] << "\n";
    std::cout << cars[1] << "\n";
    std::cout << cars[2] << "\n";

    double prices[] = {0.1, 0.3, 0.7};

    std::cout << prices[0] << "\n";
    std::cout << prices[1] << "\n";
    std::cout << prices[2] << "\n";

    std::cin >> cars[0];
}
