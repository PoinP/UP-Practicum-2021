#include <iostream>

int main()
{
    int numberCount;
    int maxNegative = INT_MIN;
    bool hasNegative = false;

    std::cout << "How many numbers do you want to enter: ";
    std::cin >> numberCount;

    for (int number; numberCount > 0;)
    {
        std::cin >> number;

        if ((maxNegative < number) && (number < 0))
        {
            hasNegative = true;
            maxNegative = number;
        }

        numberCount--;
    }

    if (!hasNegative) 
        std::cout << "You didn't enter any negative numbers!" << std::endl;
    else
        std::cout << "The largest negative number is " << maxNegative << std::endl;
}