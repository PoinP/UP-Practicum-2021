#include <iostream>

int getBinary(int);
bool hasEqualOnesAndZeros(int);
bool isPrime(int);

int main()
{
    int primes = 0;
    int iterator = 2;
    int primeInBinary = 0;

    while (primes != 20)
    {
        if (isPrime(iterator))
        {
            primeInBinary = getBinary(iterator);

            if (hasEqualOnesAndZeros(primeInBinary))
            {
                std::cout << iterator << " ";
                primes++;
            }
        }

        iterator++;
    }

    std::cout << std::endl;
}

int getBinary(int number)
{
    int baseNumber = 0;
    int digitPos = 1;
    int base = 2;

    while (number > 0)
    {
        baseNumber += (digitPos * (number % base));
        digitPos *= 10;
        number /= base;
    }

    return baseNumber;
}

bool hasEqualOnesAndZeros(int binary)
{
    int zeroCount = 0;
    int oneCount = 0;

    while (binary > 0)
    {
        binary % 10 == 0 ? zeroCount++ : oneCount++;
        binary /= 10;
    }

    return zeroCount == oneCount;
}

bool isPrime(int number)
{
    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0) return false;
    }

    return true;
}