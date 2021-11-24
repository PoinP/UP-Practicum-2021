#include <iostream>

bool isPerfect(int);

int main()
{
    int number;

    std::cin >> number;

    for (int i = 1; i <= number; i++)
    {
        if (isPerfect(i))
        {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;
}

bool isPerfect(int number)
{
    int sum = 0;
    for (int i = 1; i <= number / 2; i++)
    {
        if (number % i == 0) sum += i;
    }

    return sum == number;
}