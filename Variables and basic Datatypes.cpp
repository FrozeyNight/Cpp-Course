#include <iostream>

int main() {

	int x;
	x = 7.5;

	char test = 'AB';

	std::string test2 = "Damn there isn't even a string here?";
	std::string test3 = "isn't this a wacky way to add variables to strings?";

	const double PI = 3.1415;

	std::cout << x << "\n";
	std::cout << test << "\n";
	std::cout << test2 << "\n";
	std::cout << "Well, " << test3 << "\n";
	std::cout << "Well, " + test3 << "\n"; // well nvm i guess
	std::cout << PI;
	return 0;
}