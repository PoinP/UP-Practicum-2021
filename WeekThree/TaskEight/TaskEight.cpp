#include <iostream>

int main()
{
    int number;
    bool isPrime = true;

    std::cout << "Please enter a number and the program will show if it's prime or not!" << std::endl;
    std::cin >> number;

    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (!isPrime || number < 2) std::cout << "NO" << std::endl;
    else std::cout << "YES" << std::endl;
}