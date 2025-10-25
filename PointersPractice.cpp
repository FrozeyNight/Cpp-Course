#include <iostream>

void printNames(std::string names[], size_t size);
void changeNum(int* a, int b);
void changeNum2(int& a, int b);
void changeNumWrong(int a, int b);


int main(){

    std::string names[] = {"Bob", "Patrick", "John", "David"};
    printNames(names, sizeof(names)/sizeof(std::string));

    auto& names2 = names;
    names2[0] = "Rick";
    printNames(names, sizeof(names)/sizeof(std::string));

    std::string *pNames = names;
    pNames[1] = "Jack";
    printNames(names, sizeof(names)/sizeof(std::string));

    int x = 0;
    changeNumWrong(x, 5);
    std::cout << x << '\n';

    x = 0;
    changeNum(&x, 10);
    std::cout << x << '\n';

    x = 0;
    changeNum2(x, 20);
    std::cout << x << '\n';

    return 0;
}

void printNames(std::string names[], size_t size){
    // This WILL NOT WORK. When passing arrays into functions, they decay into pointers. Although you can use them like you would an array, you can't tell it's size. Doing sizeof(array) will give the size of a pointer, NOT the array. 
    //for (size_t i = 0; i < sizeof(names)/sizeof(std::string); i++)
    for (size_t i = 0; i < size; i++)
    {
        std::cout << names[i] << '\n';
    }
    std::cout << "=========" << "\n";
    
}

void changeNum(int* a, int b){ // if you make b a pointer you will NEED to pass a variable as a parameter. You will not be able to simply put an integer of 5
    *a = b;
}

void changeNum2(int& a, int b){ // if you make b a reference you will NEED to pass a variable as a parameter. You will not be able to simply put an integer of 5
    a = b;
}

void changeNumWrong(int a, int b){
    a = b;
}