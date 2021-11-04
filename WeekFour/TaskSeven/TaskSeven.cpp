#include <iostream>

int main()
{
    int dotX, dotY;
    int centerX, centerY, radius;

    std::cout << "Please enter the x and y coordinates of the dot: " << std::endl;
    std::cin >> dotX >> dotY;

    std::cout << "Please eneter the x, y and radius of the circle: " << std::endl;
    std::cin >> centerX >> centerY >> radius;

    int distanceFromCenter = ((dotX - centerX) * (dotX - centerX)) + ((dotY - centerY) * (dotY - centerY));

    if (distanceFromCenter < (radius * radius))
    {
        std::cout << "The dot is inside the circle!" << std::endl;
    }
    else
    {
        std::cout << "The dot is outside the circle!" << std::endl;
    }
}