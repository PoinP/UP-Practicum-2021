#include <iostream>

bool isPalindrome(int);

int main()
{
    int userInput;

    std::cout << "Please enter a numeber: ";
    std::cin >> userInput;

    std::cout << "Is palindrome: " << std::boolalpha << isPalindrome(userInput);

    std::cout << std::endl;
}

bool isPalindrome(int number)
{
    int palindrome = 0;
    for (int i = number; i > 0; i /= 10)
    {
        palindrome += i % 10;
        if (i / 10 != 0) palindrome *= 10;
    }

    return number == palindrome;
}