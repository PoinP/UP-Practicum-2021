#include <iostream>

void printTriangle(const char& letter);
int getLetterPos(char letter);

int main()
{
    printTriangle('Z');
}

void printTriangle(const char& letter)
{
    if (letter < 'A')
        return;

    for (int i = 0; i < getLetterPos(letter); i++)
    {
        std::cout << (char)('A' + i) << " ";
    }

    std::cout << std::endl;

    printTriangle(letter - 1);
}

int getLetterPos(char letter)
{
    if (letter >= 'a' && letter <= 'z')
    {
        letter -= 32;
    }

    return letter - 'A' + 1;
}