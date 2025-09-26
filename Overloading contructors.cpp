// Overloading contructors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Pizza {
    public:
        std::string topping1;
        std::string topping2;

        Pizza() {

        };
        Pizza(std::string topping1) {
            this->topping1 = topping1;
        }
        Pizza(std::string topping1, std::string topping2) {
            this->topping1 = topping1;
            this->topping2 = topping2;
        }
};

int main()
{

    Pizza pepperoni("pepperoni");
    Pizza pepperoniAndCheese("pepperoni&cheese");
    Pizza margaritta;

    std::cout << pepperoniAndCheese.topping1 <<"\n";
    std::cout << pepperoniAndCheese.topping2 <<"\n";

    int holder = 0;
    std::cin >> holder;
}
