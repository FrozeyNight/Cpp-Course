// Getters & setters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Stove {
    private:
        int temperature = 0;
    public:
        Stove(int temperature) {
            setTemperature(temperature);
        }

        int getTemperature() {
            return temperature;
        }

        void setTemperature(int temperature) {
            if (temperature < 0) {
                this->temperature = 0;
            }
            else if (temperature > 180) {
                this->temperature = 180;
            }
            else {
                this->temperature = temperature;
            }
        }
};

int main()
{
    Stove stove1(30);

    std::cout << stove1.getTemperature() << '\n';

    stove1.setTemperature(199990);

    std::cout << stove1.getTemperature() << '\n';

    int gaming = 0;
    std::cin >> gaming;
}
