#include <iostream>

int getLetterPos(char letter);
void swapWithNumbers(char* str, int letters[]);

int main()
{
    char str[] = "Cauchi";
    int letters[] = { 3, 5, 0, 3, 3, 7, 6, 5, 1, 1, 7, 2, 3, 9, 0, 5, 2, 5, 2, 7, 5, 7, 4, 9, 7, 7 };

    swapWithNumbers(str, letters);

    std::cout << str;
}

void swapWithNumbers(char* str, int letters[])
{
    if (*str == '\0')
        return;

    *str = letters[getLetterPos(*str) - 1] + '0';

    swapWithNumbers(++str, letters);
}

int getLetterPos(char letter)
{
    if (letter >= 'a' && letter <= 'z')
    {
        letter -= 32;
    }

    return letter - 'A' + 1;
}