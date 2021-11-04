#include <iostream>

int main()
{
    for (int c = 1; c <= 50; c++)
    {
        for (int a = 1; a <= 50; a++)
        {
            for (int b = 1; b <= 50; b++)
            {
                if ((c * c * c) == (a * a) + (b * b))
                {
                    std::cout << a << "," << b << "," << c << std::endl;
                }
            }
        }
    }
}