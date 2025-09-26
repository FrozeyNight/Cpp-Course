// Memory Adresses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::string name = "Patrick";
    int age = 21;
    bool student = true;

    std::cout << &name << '\n'; // 197310478616
    std::cout << &age << '\n'; // 197310478676
    std::cout << &student << '\n'; // 197310478708

    std::cin >> age;
}
