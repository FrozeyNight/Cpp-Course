// User input.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string input;
    string input2;

    cout << "What's your name?: ";
    cin >> input;

    std::cout << "Hello " << input << '\n';

    cout << "What's your full name?: ";
    std::getline(cin >> ws, input2); // this allows me to input a string with spaces, cos the cin will just skip to entering the next cin if you press space i think. Also you need #include <string> for this to work

    std::cout << "Hello " << input2;

    cin >> input;
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
