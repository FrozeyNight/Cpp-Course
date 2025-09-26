// Sorting an array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void sort(int array[], int size);

int main()
{
    int array[] = {5, 7, 10, 2, 8, 4, 3, 9, 1, 6};
    int size = sizeof(array) / sizeof(array[0]);

    for (int number : array) {
        std::cout << number << " ";
    }

    std::cout << '\n';

    sort(array, size); // that's interesting the method influences the array even tho i don't equal this to anything, in C# this wouldn't do anything

    for (int number : array) {
        std::cout << number << " ";
    }

    std::cin >> size;
}

void sort(int array[], int size) {

    int temp = 0;
    
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

}
