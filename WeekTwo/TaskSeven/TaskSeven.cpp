#include <iostream>

int main()
{
    int number;
    bool isEven, isBiggest;

    std::cout << "Please enter a neutral 4 digit number: ";

    while (true)
    {
        std::cin >> number;

        if (number < 1000 || number > 9999)
        {
            std::cout << "Invalid number! The number must be a neutral 4 digit one: ";
            continue;
        }

        break;
    }

    int firstDigit = number / 1000;
    int secondDigit = number / 100 % 10;
    int thirdDigit = number / 10 % 10;
    int fourthDigit = number % 10;

    int max = firstDigit;

    if (secondDigit > max) max = secondDigit;
    if (thirdDigit > max) max = thirdDigit;
    if (fourthDigit > max) max = fourthDigit;

    isEven = firstDigit % 2 == 0;
    isBiggest = firstDigit == max;

    std::cout << std::boolalpha << "Is even: " << isEven << ", Is biggest: " << isBiggest << std::endl;
}