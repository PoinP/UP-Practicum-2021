#include <iostream>

int main()
{
    char character;
    const int LETTER_DIFFERENCE = 'a' - 'A';

    std::cout << "Please enter a letter: ";
    std::cin >> character;

    if (character >= 'A' && character <= 'Z')
    {
        std::cout << "The lower case character corresponding to "
            << character << " is " << (char)(character + LETTER_DIFFERENCE)
            << std::endl;
    }
    else if (character >= 'a' && character <= 'z')
    {
        std::cout << "The upper case character corresponding to "
            << character << " is " << (char)(character - LETTER_DIFFERENCE)
            << std::endl;
    }
    else
    {
        std::cout << character << " is not a letter!" << std::endl;
    }
}