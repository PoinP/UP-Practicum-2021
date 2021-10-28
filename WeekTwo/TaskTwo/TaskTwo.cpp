#include <iostream>

int main()
{
    int month;

    std::cout << "Please enter a month's number: ";
    std::cin >> month;

    if (month >= 3 && month <= 5)
    {
        std::cout << "The season is Spring!" << std::endl;
    }
    else if (month >= 6 && month <= 8)
    {
        std::cout << "The season is Summer!" << std::endl;
    }
    else if (month >= 9 && month <= 11)
    {
        std::cout << "The season is Autumn!" << std::endl;
    }
    else if (month >= 1 && month <= 12)
    {
        std::cout << "The season is Winter!" << std::endl;
    }
    else
    {
        std::cout << "Invalid month!" << std::endl;
    }
}