#include <iostream>

int main()
{
    int nCols;
    char firstChar, secondChar;

    std::cout << "Enter number of columns and two symbols: ";
    std::cin >> nCols >> firstChar >> secondChar;

    for (int i = 0; i < nCols - 1; i++)
    {
        for (int j = 0; j < nCols; j++)
        {
            if (i >= j) std::cout << firstChar;
            else if (i < j) std::cout << secondChar;
        }
        std::cout << std::endl;
    }
}