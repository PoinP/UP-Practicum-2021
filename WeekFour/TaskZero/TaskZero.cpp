#include <iostream>

int main()
{
    int rowCount;

    std::cout << "Please enter a row count: ";
    std::cin >> rowCount;

    int i = 0;
    while (rowCount)
    {
        i++;
        for (int j = 0; j < i; j++)
        {
            std::cout << "1";
        }

        if (rowCount - 1 != 0)
        {
            std::cout << " + ";
        }
        rowCount--;
    }

    std::cout << std::endl;
}
