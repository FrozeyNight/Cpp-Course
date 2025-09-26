// Search an array for an element.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int getElementInArray(int array[], int size, int element);

int main()
{
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int myNum = 0;
    int index = 0;

    std::cout << "Enter an element to search in the array: ";
    std::cin >> myNum;

    index = getElementInArray(numbers, size, myNum);

    if (index != -1) {
        std::cout << "The element " << myNum << " is at index " << index;
    }
    else {
        std::cout << "The element " << myNum << " does not exist in the array";
    }

    std::cin >> index;

}

int getElementInArray(int array[], int size, int element) {
    for (int i = 0; i < size; i++) { // this is a linear search which is obviously bad for performence
        if (array[i] == element) {
            return i;
        }
    }

    return -1; // a -1 in an intiger usually means that soemthing was not found
}
