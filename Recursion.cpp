// Recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void walk(int steps);
void walkRecursion(int steps);

int main()
{
	walk(10);
	walkRecursion(10);

	int x = 0;
	std::cin >> x;
}

void walk(int steps) {
	for (int i = 0; i < steps + 1; i++)
	{
		std::cout << "You took a step!\n";
	}
}

void walkRecursion(int steps) {
	if (steps > 0) {
		std::cout << "You took a step!\n";
		walkRecursion(steps - 1);
	}
}
