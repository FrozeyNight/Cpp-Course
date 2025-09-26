// Function template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

template <typename T, typename U>

auto max(T x, U y) {
    return (x > y) ? x : y;
}

int main()
{
    std::cout << max(1, 2.1);

    int holder = 0;
    std::cin >> holder;
}
