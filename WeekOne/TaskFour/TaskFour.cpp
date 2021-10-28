#include <iostream>

int main()
{
    int firstNumber, secondNumber, temp;

    std::cout << "a = ";
    std::cin >> firstNumber;
    std::cout << "b = ";
    std::cin >> secondNumber;

    std::cout << std::endl;

    //Swap
    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;

    //Operators
    firstNumber += secondNumber;
    secondNumber = firstNumber - secondNumber;
    firstNumber -= secondNumber;

    //Bit Swap
    firstNumber ^= secondNumber;
    secondNumber ^= firstNumber;
    firstNumber ^= secondNumber;

    std::cout << "a = " << firstNumber << "\nb = " << secondNumber << std::endl;
}
