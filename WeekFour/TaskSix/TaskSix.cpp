#include <iostream>

int main()
{
    for (int a = 1; a <= 50; a++)
    {
        for (int b = a; b <= 50; b++)
        {
            for (int c = 1; c <= 50; c++)
            {
                if ((c * c * c) == (a * a) + (b * b))
                {
                    std::cout << a << "," << b << "," << c << std::endl;
                }
            }
        }
    }
}