#include <iostream>

int main()
{
    double x;
    int lowInterval, highInterval;

    std::cout << "Enter a number: ";
    std::cin >> x;

    std::cout << "Enter an interval: ";
    std::cin >> lowInterval >> highInterval;

    bool isInInterval = x >= lowInterval && x <= highInterval;

    std::cout << std::boolalpha << isInInterval << std::endl;
}