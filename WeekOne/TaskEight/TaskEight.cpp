#include <iostream>

int main()
{
    int firstNumber, secondNumber, thirdNumber;

    std::cout << "Please enter three integeres: ";
    std::cin >> firstNumber >> secondNumber >> thirdNumber;

    int min = firstNumber;
    int max = firstNumber;

    if (secondNumber < min) min = secondNumber;
    if (secondNumber > max) max = secondNumber;
    if (thirdNumber < min) min = thirdNumber;
    if (thirdNumber > max) max = thirdNumber;

    std::cout << "Min: " << min << ", Max: " << max << std::endl;
}
