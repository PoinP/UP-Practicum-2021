#include <iostream>

void enterString(char[], const int);
void printString(const char[], const int);

int replaceCharacterAndGetRepeatingCount(char[], const int, const char);

int main()
{
    const int ARRAY_SIZE = 101;

    int userLength;
    char character;
    char string[ARRAY_SIZE];

    std::cout << "How many characters do you want to enter[1 - 100]: ";

    do
    {
        std::cin >> userLength;
    } while (userLength < 1 || userLength > 100);

    enterString(string, userLength);

    printString(string, userLength);

    std::cout << "Which character would you like to replace: ";
    std::cin >> character;

    int repeatingCount = replaceCharacterAndGetRepeatingCount(string, userLength, character);

    std::cout << "The character " << character << " is repeated " << repeatingCount  << " times." << std::endl;

    printString(string, userLength);
}

void enterString(char string[], const int length)
{
    std::cout << "Please enter the elements of the array: " << std::endl;

    char character;

    for (int i = 0; i < length; i++)
    {
        std::cin >> string[i];
    }

    std::cout << std::endl;

    return;
}

void printString(const char string[], const int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << string[i] << " ";
    }

    std::cout << std::endl << std::endl;
}

int replaceCharacterAndGetRepeatingCount(char string[], const int length, const char character)
{
    int counter = 0;

    for (int i = 0; i < length; i++)
    {
        if (string[i] == character)
        {
            counter++;
            string[i] = '*';
        }
    }

    return counter;
}