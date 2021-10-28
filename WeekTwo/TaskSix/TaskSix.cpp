#include <iostream>

int main()
{
    char character;

    std::cout << "Please enter a character: ";
    std::cin >> character;

    if (character >= '0' && character <= '9')
    {
        std::cout << character << " is a digit!" << std::endl;
    }
    else if (character >= 'A' && character <= 'Z')
    {
        std::cout << character << " is an uppercase letter!" << std::endl;
    }
    else if (character >= 'a' && character <= 'z')
    {
        std::cout << character << " is a lowercase letter!" << std::endl;
    }
    else
    {
        std::cout << character << " is a special symbol!" << std::endl;
    }
}