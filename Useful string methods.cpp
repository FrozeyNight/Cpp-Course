// Useful string methods.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    using namespace std;

    string gamering = "asdijgids\n";

    int checker = gamering.length();
    cout << checker << '\n';

    gamering.clear();

    if (gamering.empty()) {
        cout << "oh no empty string\n";
    }

    gamering = "yothat'sme";

    gamering.append("@gmail.com");

    cout << gamering << '\n';

    cout << gamering.at(0) << '\n';
    cout << gamering[0] << '\n';

    gamering.insert(5, " ");

    cout << gamering << '\n';
    cout << gamering.find(' ') << '\n';

    gamering.erase(0, 3);

    cout << gamering << '\n';

    cin >> gamering;
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
