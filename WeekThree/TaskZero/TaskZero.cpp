#include <iostream>

int main()
{
    double number;
    int power;
    double result = 1;

    std::cout << "Please eneter a number and its power: ";
    std::cin >> number >> power;

    while (power > 0)
    {
        result *= number;
        power--;
    }

    if (power < 0) 
        std::cout << "Can not calculate with negative power!" << std::endl;
    else 
        std::cout << result << std::endl;
}