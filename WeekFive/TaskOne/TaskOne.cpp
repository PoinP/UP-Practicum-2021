#include <iostream>
#include <cmath>

bool doesTriangleExist(int, int, int);
int getTrianglePerimeter(int, int, int);
double getTriangleArea(int, int, int);

int main()
{
    int sideA, sideB, sideC;

    while (std::cin >> sideA >> sideB >> sideC)
    {
        std::cout << std::boolalpha << doesTriangleExist(sideA, sideB, sideC) 
                  << " " << getTrianglePerimeter(sideA, sideB, sideC) 
                  << " " << getTriangleArea(sideA, sideB, sideC) << std::endl;
    }
}

bool doesTriangleExist(int sideA, int sideB, int sideC)
{
    return ((sideA + sideB > sideC) && (sideA + sideC > sideB) && (sideB + sideC > sideA));
}

int getTrianglePerimeter(int sideA, int sideB, int sideC)
{
    if (doesTriangleExist(sideA, sideB, sideC))
    {
        return sideA + sideB + sideC;
    }

    return 0;
}
double getTriangleArea(int sideA, int sideB, int sideC)
{
    double halfPerimeter = getTrianglePerimeter(sideA, sideB, sideC) / 2.0;

    return std::sqrt(halfPerimeter * (halfPerimeter - sideA) * (halfPerimeter - sideB) * (halfPerimeter - sideC));
}