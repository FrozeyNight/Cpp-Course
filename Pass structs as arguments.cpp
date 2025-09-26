// Pass structs as arguments.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Car
{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintCar(Car& car, std::string color);

int main()
{
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "Blue";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "Red";

    std::cout << &car1 << '\n';
    printCar(car1);
    printCar(car2);

    paintCar(car1, "Silver");
    paintCar(car2, "Gold");

    printCar(car1);
    printCar(car2);

    std::cin >> car1.model;
}

void printCar(Car &car) {
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}
void paintCar(Car& car, std::string color) {
    car.color = color;
}
