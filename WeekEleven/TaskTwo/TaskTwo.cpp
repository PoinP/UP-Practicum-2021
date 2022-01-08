#include <iostream>

int findFactorial(int n);

int main()
{
    std::cout << findFactorial(7);
}

int findFactorial(int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return n;

    return n * findFactorial(n - 1);
}