#include <iostream>

double findProduct(const double arr[], const int& size);

int main()
{
    double nums[] = { 2.1, 0, 9.9, 3, 1, -1, 14.5, 7 };

    std::cout << findProduct(nums, 8);
}

double findProduct(const double arr[], const int& size)
{
    if (size == 1)
    {
        if (arr[size - 1] > arr[size] && arr[size] > 0)
            return arr[size];

        return 1;
    }

    if (arr[size - 2] > arr[size - 1] && arr[size - 1] > 0)
        return arr[size - 1] * findProduct(arr, size - 1);
    else
        return findProduct(arr, size - 1);
}