// Const parameters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void iForgot(const std::string &name, const int &age); // making variables constant with passing by value only really conveys intent, but while passing by reference makes it impossible to change the variables in the fuction making them read-only

int main()
{
    std::string name = "Patrick";
    int age = 21;

    iForgot(name, age);

    std::cin >> name;
}

void iForgot(const std::string &name, const int &age)
{
    //name = " ";
    //age = 0;

    std::cout << name << '\n';
    std::cout << age << '\n';

}

