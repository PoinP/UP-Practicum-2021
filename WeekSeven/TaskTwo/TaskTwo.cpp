#include <iostream>

void printArray(const int[], int);
void enterArray(int[], int);
void onlyOdd(int[], int&);

bool isEven(const int);

int main()
{
    const int ARRAY_SIZE = 25;
    int numbers[ARRAY_SIZE];
    int userSize;

    std::cout << "Please enter a size for the array[5 - 25]: ";

    do
    {
        std::cin >> userSize;
    } while (userSize < 5 || userSize > 25);

    std::cout << "Please enter only 2-digit numbers: ";
    enterArray(numbers, userSize);

    onlyOdd(numbers, userSize);

    printArray(numbers, userSize);
}

void printArray(const int arr[], int size)
{
    for (int i = 1; i <= size; i++)
    {
        std::cout << arr[i - 1] << " ";
    }

    std::cout << std::endl;
}

void enterArray(int numbers[], int size)
{
    std::cout << "Enter the array's elements: " << std::endl;

    for (int i = 0; i < size; i++)
    {
        do
        {
            std::cin >> numbers[i];
        } while (numbers[i] < 10 || numbers[i] > 99);
    }

    std::cout << std::endl;
}

void onlyOdd(int numbers[], int &size)
{
    for (int i = 0; i < size; i++)
    {
        if (isEven(numbers[i]))
        {
            for (int j = 0; j < size - i; j++)
            {
                numbers[i + j] = numbers[i + j + 1];
            }

            i--;
            size--;
        }
    }
}

bool isEven(const int number)
{
    return (number % 2 == 0);
}