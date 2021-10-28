#include <iostream>

int main()
{
    int number;
    int binary = 0;
    int digitPos = 1;

    std::cout << "Enter a number between 0 an 1000: ";

    do
    {
        std::cin >> number;
    } while (number < 0 || number > 1000);

    while(number > 0)
    {
        binary += (digitPos * (number % 2));
        digitPos *= 10;
        number /= 2;
    }

    std::cout << binary << std::endl;
}