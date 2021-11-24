#include <iostream>

int findFactorial(int);

int main()
{
    int number;

    std::cin >> number;

    std::cout << findFactorial(number) << std::endl;
}

int findFactorial(int number)
{
    int product = 1;

    while (number > 0)
    {
        product *= number;
        number--;
    }

    return product;
}
