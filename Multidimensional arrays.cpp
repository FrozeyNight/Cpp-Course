// Multidimensional arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::string foods[][3] = {{"pizza", "hamburger", "hotdog"},
                              {"ramen", "sushi", "dumplings"},
                              { "schabowy", "zurek", "pierogi"}};

    int rows = sizeof(foods) / sizeof(foods[0]);
    int columns = sizeof(foods[0]) / sizeof(foods[0][0]);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << foods[i][j] << ' ';
        }
        std::cout << '\n';
    }

    std::cin >> rows;
}
