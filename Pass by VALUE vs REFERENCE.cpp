// Pass by VALUE vs REFERENCE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void swap(std::string x, std::string y); // passing by value (making a copy of the passed variable)
void swap2(std::string &x, std::string &y); // passing by reference (passing the memory adress of the variables (esentially giving the variables themselfs))

int main()
{
    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x, y);

    std::cout << x <<'\n';
    std::cout << y <<'\n';

    std::cout << '\n';

    swap2(x, y);

    std::cout << x << '\n';
    std::cout << y << '\n';

    std::cin >> x;
}

void swap(std::string x, std::string y) {
    std::string temp = "";

    temp = x;
    x = y;
    y = temp;
}
void swap2(std::string& x, std::string& y) { // you should pass by reference if you can
    std::string temp = "";

    temp = x;
    x = y;
    y = temp;
}