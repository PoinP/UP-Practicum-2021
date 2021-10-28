#include <iostream>

int main()
{
    int firstNumber, secondNumber;
    int product = 1;

    std::cout << "Please enter two numbers: ";
    std::cin >> firstNumber >> secondNumber;

    if (firstNumber > secondNumber)
    {
        firstNumber ^= secondNumber;
        secondNumber ^= firstNumber;
        firstNumber ^= secondNumber;
    }

    while (firstNumber < secondNumber)
    {
        product *= firstNumber;
        firstNumber++;
    }

    std::cout << "The product is " << product << std::endl;;
}