#include <iostream>

int main()
{
    int nElements;

    std::cout << "How many elements of ai = i^2 + 3i do you want to print: ";
    std::cin >> nElements;

    for (int i = 1; i <= nElements; i++)
    {
        int result = (i * i) + (3 * i);
        std::cout << "n" << i << " = " << result << std::endl;
    }
}