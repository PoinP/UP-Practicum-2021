#include <iostream>

int main()
{
    int year;
    bool isLeap;

    std::cout << "Please enter a year: ";
    std::cin >> year;

    if (year % 100 == 0) isLeap = year % 400 == 0;
    else if (year % 4 == 0) isLeap = true;
    else isLeap = false;

    std::cout << std::boolalpha << isLeap;
}
