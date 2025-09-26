// Recursion part II.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int factorial(int num);
int factorialRecursion(int num);

int main()
{
    std::cout << factorial(10) << '\n';
    std::cout << factorialRecursion(10);

	int holder = 0;

	std::cin >> holder;
}

int factorial(int num) {
	int result = 1;
	for (int i = 1; i <= num; i++)
	{
		result = i * result;
	}

	return result;
}

int factorialRecursion(int num) {
	if (num > 1) {
		return num * factorialRecursion(num - 1); // it's slower and takes more memory but is apparently more readable not to me tho
	}
	else {
		return num * 1;
	}
}
