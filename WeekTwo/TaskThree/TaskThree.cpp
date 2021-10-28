#include <iostream>

int main()
{
    int a, b;

    std::cout << "You are going to be prompted to enter elements of the linear equation ax + b = 0!" << std::endl;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;

    if (a == 0)
    {
        if (b != 0)
        {
            std::cout << "NO" << std::endl;
        }
        else
        {
            std::cout << "INF" << std::endl;
        }

        return 0;
    }
    else
    {
        if (-b % a != 0)
        {
            std::cout << "NO" << std::endl;
            return 0;
        }

        int x = -b / a;

        std::cout << "x is equal to " << x << std::endl;
    }
}