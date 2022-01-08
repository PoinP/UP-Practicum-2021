#include <iostream>

int* resizeArray(int* arr, const int& oldSize, const int& newSize);


int main()
{
    int *arr = new int[5]{ 2, 3, 4, 5, 6 };

    arr = resizeArray(arr, 5, 3);

    for (int i = 0; i < 3; i++)
    {
        std::cout << arr[i] << " ";
    }

    delete[] arr;
}

int* resizeArray(int* arr, const int &oldSize, const int &newSize)
{
    if (oldSize > newSize)
    {
        std::cout << "Can not resize! Array will lose data!";
        return new int[0];
    }

    int *copyArray = new int[oldSize];
    int *newArray = new int[newSize];

    for (int i = 0; i < newSize; i++)
    {
        copyArray[i] = arr[i];
    }

    delete[] arr;
    arr = new int[newSize];

    for (int i = 0; i < newSize; i++)
    {
        arr[i] = copyArray[i];
    }

    delete[] copyArray;

    return arr;
}