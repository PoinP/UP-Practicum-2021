#include <iostream>

int main()
{
    int numerator, denominator;

    std::cout << "Numerator = ";
    std::cin >> numerator;
    std::cout << "Denominator = ";
    std::cin >> denominator;

    bool areDivisible = numerator % denominator == 0;

    std::cout << std::boolalpha << areDivisible << std::endl;
}