#include <iostream>

int main()
{
    int number;

    std::cout << "Enter a number and I'll reverse it: ";
    std::cin >> number;

    while (number > 0)
    {
        std::cout << number % 10;
        number /= 10;
    }

    std::cout << std::endl;
}