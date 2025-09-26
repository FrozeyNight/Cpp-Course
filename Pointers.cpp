// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::string name = "Patrick";
    int age = 21;

    std::string *pName = &name; // pointers store the memory adress of a given variable. Sometimes it's easier to give an adress than a variable (like if you want to give away pizzas you won't go with all of them and ask who wants it,
    int* pAge = &age;           // you'll give everyone the adress to get the pizza themselfs)

    std::string freePizzas[5] = { "pizza1", "pizza2", "pizza3", "pizza4", "pizza5" };

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *freePizzas;

    std::cin >> name;
}
