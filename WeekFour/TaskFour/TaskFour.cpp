#include <iostream>

int main()
{
    int number;

    std::cout << "Please enter a natural number: ";
    std::cin >> number;

    int lastDigit = number % 10;

    int temp = number;
    while (temp > 9)
    {
        temp /= 10;
    }

    int firstDigit = temp % 10;

    std::cout << "The first digit of " << number << " is: " << firstDigit << std::endl;
    std::cout << "The last digit of " << number << " is: " << lastDigit << std::endl;

    if (firstDigit == lastDigit)
    {
        std::cout << "Those digits are equal!" << std::endl;
    }
    else
    {
        std::cout << "Those digits are not equal!" << std::endl;
    }
}