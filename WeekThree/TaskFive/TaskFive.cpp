#include <iostream>

int main()
{
    double number;
    double sum = 0;

    std::cout << "Enter as many numbers as you want ant I'll sum them for you!" << std::endl;
    std::cout << "When you enter 0, the sum will print on screen!" << std::endl;

    do
    {
        std::cin >> number;
        sum += number;
    } while (number != 0);

    std::cout << std::endl << "The sum is " << sum << std::endl;
}