// Read and Write from slash to a file (not from the course).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::fstream myFile;
    myFile.open("test", std::ios::out);
    if (myFile.is_open()) {
        myFile << "just testing";
        myFile << "should be working i hope";
    }
    myFile.close();

    myFile.open("test", std::ios::app);
    if (myFile.is_open()) {
        myFile << "just testing again";
        myFile << "you know seeing if it works";
    }
    myFile.close();

    std::string line = "";

    myFile.open("test", std::ios::in);
    if (myFile.is_open()) {
        while (std::getline(myFile, line)) {
            std::cout << line << '\n';
        }
    }
    myFile.close();

    std::cin >> line;
}
