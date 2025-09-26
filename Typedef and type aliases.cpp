// Typedef and type aliases.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t; // to make it easier if there are really long variable names, but remember to add the _t at the end for clarity
using pairlist_t = std::vector<std::pair<std::string, int>>; // this is more common and works better

int main()
{
    using namespace std;
    string hey = "something";
    pairlist_t pairlist;
    std::cout << "Hello World!\n";

    cout << hey;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
