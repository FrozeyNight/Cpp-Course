// Structs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct student {
    std::string name;
    double gpa;
    bool enrolled = true;
};

int main()
{
    student student1;
    student student2;
    student student3;

    student1.name = "Patrick";
    student1.gpa = 2.8;

    student2.name = "John";
    student2.gpa = 2.3;

    student3.name = "Alex";
    student3.gpa = 1.5;
    student3.enrolled = false;

    std::cout << student1.name<< '\n';
    std::cout << student1.gpa<< '\n';
    std::cout << student1.enrolled<< '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.gpa << '\n';
    std::cout << student3.enrolled << '\n';

    int holder = 0;

    std::cin >> holder;
}
