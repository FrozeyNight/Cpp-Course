// Passing an array to a function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double getTotal(double prices[], int size);

int main()
{
    double prices[] = {15.99, 20.01, 39.99, 6.54, 6,23};
    int size = sizeof(prices) / sizeof(prices[0]); // we have to calculate the size here because when you pass an array to a function you're not actually passing that array and you can't calculate the size of it. It's a pointer which will be explained in a later lecture.
    double total = getTotal(prices, size);

    std::cout << total << '$';

    std::cin >> total;
}

double getTotal(double prices[], int size) {

    double total = 0;

    for (int i = 0; i < size; i++) {
        total += prices[i];
    }

    return total;
}
