// OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Human {
    public:
        std::string name;
        int age;
        std::string occupation;

        void Eat() {
            std::cout << name << " Is eating!\n";
        }

        void Drink() {
            std::cout << name << " Is drinking!\n";
        }

        void Sleep() {
            std::cout << name << " Is sleeping!\n";
        }

};

int main()
{
    Human human1;

    human1.name = "Patrick";
    human1.age = 18;
    human1.occupation = "Unemployed";

    human1.Eat();
    human1.Drink();
    human1.Sleep();

    int holder = 0;
    std::cin >> holder;
}
