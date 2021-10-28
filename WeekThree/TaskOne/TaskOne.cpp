#include <iostream>

int main()
{
    int number;
    int factorial = 1;

    std::cout << "Please enter a number: ";
    std::cin >> number;

    while (number > 0)
    {
        factorial *= number;
        number--;
    }

    std::cout << "Factorial: " << factorial << std::endl;
}