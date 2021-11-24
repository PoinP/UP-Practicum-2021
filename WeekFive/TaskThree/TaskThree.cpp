#include <iostream>

int getNumericBase(int, int);

int main()
{
    int number, base;

    std::cin >> number;

    do
    {
        std::cin >> base;
    } while (base < 2 || base > 5);

    std::cout << getNumericBase(number, base);
}

int getNumericBase(int number, int base)
{
    int baseNumber = 0;
    int digitPos = 1;

    while (number > 0)
    {
        baseNumber += (digitPos * (number % base));
        digitPos *= 10;
        number /= base;
    }

    return baseNumber;
}