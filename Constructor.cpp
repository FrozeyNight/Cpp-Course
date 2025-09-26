// Constructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Car {
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        Car(std::string make, std::string model, int year, std::string color) {
            this->make = make;
            this->model = model;
            this->year = year;
            this->color = color;
        }
};

int main()
{
    Car car1("Chevy", "Corvette", 2023, "Red");

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    int holder = 0;
    std::cin >> holder;
}
