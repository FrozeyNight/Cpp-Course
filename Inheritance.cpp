// Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Animal {
    public:
        bool alive = true;
    void eating() {
            std::cout << "The animal is eating!\n";
    }
};

class Dog : public Animal {
    public: 
    void bark() {
        std::cout << "The dog goes woof!\n";
    }
};

class Cat : public Animal {
public:
    void meow() {
        std::cout << "The cat is meowing!\n";
    }
};

int main()
{
    Dog dog;

    std::cout << dog.alive << '\n';
    dog.bark();

    Cat cat;
    cat.meow();

    int holder = 0;
    std::cin >> holder;
}
