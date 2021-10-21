#include <iostream>

int main()
{
    double firstNumber, secondNumber, total;
    char operatr;
    bool isValidOperator = false;

    std::cout << "Please enter the first number: ";
    std::cin >> firstNumber;
    std::cout << "Please choose an operator (+, -, *, /): ";
    std::cin >> operatr;
    std::cout << "Please enter the second number: ";
    std::cin >> secondNumber;

    while (!isValidOperator)
    {
        isValidOperator = true;
        switch (operatr)
        {
        case '+':
            total = firstNumber + secondNumber;
            break;
        case '-':
            total = firstNumber - secondNumber;
            break;
        case '*':
            total = firstNumber * secondNumber;
            break;
        case '/':
            if (secondNumber == 0)
            {
                std::cout << "Can not devide by zero!" << std::endl;
                return 0;
            }

            total = firstNumber / secondNumber;
            break;
        default:
            isValidOperator = false;
            std::cout << "Invalid operator! Please try again: ";
            std::cin >> operatr;
        }
    }

    std::cout << "The total is " << total << std::endl;
}