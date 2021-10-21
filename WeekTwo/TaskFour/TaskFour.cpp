#include <iostream>

int main()
{
    int month, year;

    std::cout << "Please enter a month and a year: ";
    std::cin >> month >> year;

    while (true)
    {
        if (year > 0)
        {
            while (true)
            {
                switch (month)
                {
                case 1: case 3: case 5:
                case 7: case 8: case 10:
                case 12:
                    std::cout << 31;
                    return 0;
                case 4: case 6: case 9:
                case 11:
                    std::cout << 30;
                    return 0;
                case 2:
                    //Checks if a year is leap
                    if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0)
                    {
                        std::cout << "29" << std::endl;
                        return 0;
                    }

                    std::cout << "28" << std::endl;
                    return 0;
                default:
                    std::cout << "Invalid month! Please enter the month again: ";
                    std::cin >> month;
                    break;
                }
            }

            return 0;
        }

        std::cout << "Invalid year! Please enter the year again: ";
        std::cin >> year;
    }
}