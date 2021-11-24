#include <iostream>

bool isDateValid(int, int, int);
bool isLeapYear(int);
int getMonthLength(int, int);

int main()
{
    int day, month, year;

    std::cin >> day >> month >> year;

    std::cout << std::boolalpha << isDateValid(day, month, year) << std::endl;
}

bool isDateValid(int day, int month, int year)
{
    return (year > 0 && day >= 1 &&
        day <= 31 &&
        day <= getMonthLength(month, year));
}

bool isLeapYear(int year)
{
    return ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0);
}

int getMonthLength(int month, int year)
{
    switch (month)
    {
    case 1: case 3: case 5:
    case 7: case 8: case 10:
    case 12:
        return 31;
    case 4: case 6: case 9:
    case 11:
        return 30;
    case 2:
        if (isLeapYear(year)) return 29;
        return 28;
    default:
        return 0;
        break;
    }
}

