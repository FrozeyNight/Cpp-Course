// Dynamic memory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int* pNum = nullptr;

    pNum = new int;

    *pNum = 21;

    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    delete pNum; // importante cos if we're using dynaminc memory and we won't delete it it will clog up the space

    char* pGrades = nullptr;
    int size = 0;

    std::cout << "Enter the number of grades: ";
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter grade number " << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << pGrades[i] << ' ';
    }

    delete[] pGrades;

    std::cin >> size;
}
