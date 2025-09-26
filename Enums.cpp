// Enums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

enum Day{monday, tuesday, wednesday, thursday, friday, saturday, sunday};

int main()
{
    Day day = sunday;

    switch (day) {
        case monday:
            std::cout << "Today is monday!";
            break;
        case tuesday:
            std::cout << "Today is tuesday!";
            break;
        case wednesday:
            std::cout << "Today is wednesday!";
            break;
        case thursday:
            std::cout << "Today is thursday!";
            break;
        case friday:
            std::cout << "Today is friday!";
            break;
        case saturday:
            std::cout << "Today is saturday!";
            break;
        case sunday:
            std::cout << "Today is sunday!";
            break;
    }

    int holder = 0;

    std::cin >> holder;
}

