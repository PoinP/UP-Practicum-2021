#include <iostream>
#include <cmath>

int main()
{
    unsigned int sideA, sideB, sideC;
    bool doesTriangleExist = false;

    std::cout << "Please enter a triangle's sides: ";
    std::cin >> sideA >> sideB >> sideC;

    if (sideA + sideB > sideC && sideA + sideC > sideB && sideB + sideC > sideA) doesTriangleExist = true;

    std::cout << std::boolalpha << doesTriangleExist << std::endl;

    if (doesTriangleExist)
    {
        int perimeter = sideA + sideB + sideC;
        int halfPerimeter = perimeter / 2;
        double area = std::sqrt(halfPerimeter *
            (halfPerimeter - sideA) *
            (halfPerimeter - sideB) *
            (halfPerimeter - sideC));

        std::cout << "Perimeter: " << perimeter << " Area: " << area << std::endl;
    }
}
