#include <iostream>
#include <cmath>

int main()
{
    unsigned int firstNumber, secondNumber;

    std::cout << "Please enter two neutral numbers with 2 digits: ";
    std::cin >> firstNumber >> secondNumber;

    int total = firstNumber * secondNumber;
    int lastDigit = total % 10;
    bool isEven = total % 2 == 0;

    std::cout << total << ", " << lastDigit << " - " << isEven << std::endl;
}