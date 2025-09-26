// QUIZ GAME.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::string questions[] = {"1. What year was C++ created?: ",
                               "2. Who invented C++?: ",
                               "3. What is the predecessor of C++?: ",
                               "4. Is the Earth flat?"};

    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
                                {"A. C", "B. C+", "C. C--", "D. B++"},
                                {"A. yes", "B. no", "C. sometimes", "D. what's Earth?"}};

    int size = sizeof(questions)/sizeof(questions[0]);
    char answerKey[] = {'C', 'B', 'A', 'B'};
    char guess = 0;
    int score = 0;

    for (int i = 0; i < size; i++)
    {
        std::cout << "*********************************************\n";
        std::cout << questions[i] << '\n';
        for (int j = 0; j < sizeof(options[0])/sizeof(options[0][0]); j++)
        {
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess;
        guess = toupper(guess);

        if (answerKey[i] == guess) {
            std::cout << "CORRECT!\n";
            score++;
        }
        else {
            std::cout << "WRONG!\n";
            std::cout << "The correct answer was: " << answerKey[i] << '\n';
        }
    }
    std::cout << "*********************************************\n";
    std::cout << "*                   RESULTS                 *\n";
    std::cout << "*********************************************\n";
    std::cout << "CORRECT GUESSES: " << score << '\n';
    std::cout << "NUMBER OF QUESTIONS: " << size << '\n';
    std::cout << "SCORE: " << (double)score/(double)size * 100 << '%';



    std::cin >> size;
}

