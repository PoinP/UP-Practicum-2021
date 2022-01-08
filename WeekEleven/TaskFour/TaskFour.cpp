#include <iostream>

int getBinary(int number);
int binaryHelper(int number, int& digitPosition);

int main()
{
    std::cout << getBinary(5);
}

int getBinary(int number)
{
    int digitPosition = 1;

    return binaryHelper(number, digitPosition);
}

int binaryHelper(int number, int &digitPosition)
{
    if (number == 0)
        return 0;

    int binary = (digitPosition * (number % 2));

    digitPosition *= 10;
    number /= 2;

    return binary + binaryHelper(number, digitPosition);
}