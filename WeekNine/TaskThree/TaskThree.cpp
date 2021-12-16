#include <iostream>

bool duplicates(long* pointers[], int size);

int main()
{
    long a, b, c, d;
    a = 1; b = 2; c = 3; d = 2;

    long* pointers[] { &a, &b, &c, &d };
    int size = 4;

    bool hasDuplicates = duplicates(pointers, size);

    std::cout << std::boolalpha << hasDuplicates;
}

bool duplicates(long* pointers[], int size)
{
    while (size > 1)
    {
        for (int i = 1; i < size; i++)
        {
            if(**pointers == **(pointers + i)) return true;  
            
            // *(*(pointers)) -> *(&a) -> a
            // *(*(pointers + 1)) -> *(&b) -> b
            // *(*(pointers + 2)) -> *(&c) -> c
            // *(*(pointers + 3)) -> *(&d) -> d
        }

        pointers = pointers + 1; //pointers++;
        size--;
    }

    return false;
}