#include <iostream>

int getDigitCount(int number);
char* convertToString(int number);

int main()
{
    char* string = convertToString(8072653);

    std::cout << string;

    delete[] string;
}

char* convertToString(int number)
{
    int stringLength = getDigitCount(number);
    char* string = new char[stringLength + 1];

    for (int i = stringLength - 1; i >= 0; i--)
    {
        string[i] = (number % 10) + '0';
        number /= 10;
    }
    string[stringLength] = '\0';

    return string;
}

int getDigitCount(int number)
{
    int digits = 0;

    while (number > 0)
    {
        digits++;
        number /= 10;
    }

    return digits;
}