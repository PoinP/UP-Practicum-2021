#include <iostream>
#include <math.h>

int main()
{
    int a, b, c;

    std::cout << "Please enter a, b and c for ax^2 + bx + c = 0: ";
    std::cin >> a >> b >> c;

    if (a == 0)
    {
        if (b != 0)
        {
            double x = -c / (double)b;
            std::cout << "x = " << x << std::endl;
        }
        else if (c != 0)
        {
            std::cout << "No solution!" << std::endl;
        }
        else
        {
            std::cout << "Every x is a solution!" << std::endl;
        }

        return 0;
    }

    int discimamnt = (b * b) - (4 * a * c);

    if (discimamnt > 0)
    {
        double x1, x2;

        x1 = (-b + std::sqrt(discimamnt)) / (2 * (double)a);
        x2 = (-b - std::sqrt(discimamnt)) / (2 * (double)a);

        std::cout << "x1 = " << x1 << ", x2 = " << x2 << std::endl;
    }
    else if (discimamnt == 0)
    {
        double x = -b / (2 * a);
        std::cout << "x1 = x2 = " << x << std::endl;
    }
    else
    {
        std::cout << "No solution!" << std::endl;
        return 0;
    }
}