#include <iostream>

int main()
{
    int squareSize;

    std::cout << "Please enter the square's size: ";
    std::cin >> squareSize;

    for (int i = 0; i < squareSize; i++)
    {
        for (int j = 0; j < squareSize; j++)
        {
            if (i == 0 || i > j || i == squareSize || j == squareSize - 1)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }

        std::cout << std::endl;
    }
}