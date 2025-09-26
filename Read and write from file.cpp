// Read and write from file.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::fstream myFile;
    myFile.open("test.txt", std::ios::out);
    if (myFile.is_open()) {
        myFile << "just testing\n";
        myFile << "should be working i hope\n";
    }
    myFile.close();

    myFile.open("test.txt", std::ios::app);
    if (myFile.is_open()) {
        myFile << "just testing again\n";
        myFile << "you know seeing if it works\n";
    }
    myFile.close();

    std::string line = "";

    myFile.open("test.txt", std::ios::in);
    if (myFile.is_open()) {
        while (std::getline(myFile, line)) {
            std::cout << line << '\n';
        }
    }
    myFile.close();

    std::cin >> line;
}
