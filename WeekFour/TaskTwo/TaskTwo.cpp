#include <iostream>

int main()
{
    int number;

    std::cout << "Eneter a numer and I'll determine if it's a palindrome: ";
    std::cin >> number;

    int palindrome = 0;
    for (int i = number; i > 0; i /= 10)
    {
        palindrome += i % 10;
        if(i / 10 != 0) palindrome *= 10;
    }

    if (number == palindrome)
    {
        std::cout << "The number is a palindrome!" << std::endl;
    }
    else
    {
        std::cout << "The number is not a palindrome!" << std::endl;
    }
}