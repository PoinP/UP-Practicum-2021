#include <iostream>

void enterArray(int[], int);
void sortArray(int[], int);
void printArray(const int[], int);


int main()
{
    const int ARRAY_SIZE = 100;
    int numbers[ARRAY_SIZE];
    int userSize;

    std::cout << "How many numbers do you want to enter: ";

    do
    {
        std::cin >> userSize;
    } while (userSize < 1 || userSize > 100);

    enterArray(numbers, userSize);
    printArray(numbers, userSize);

    std::cout << std::endl;

    std::cout << "Sorting..." << std::endl;;
    sortArray(numbers, userSize);
    printArray(numbers, userSize);

}

void enterArray(int numbers[], int size)
{
    std::cout << "Enter the array's elements: " << std::endl;

    for (int i = 0; i < size; i++)
    {
        std::cin >> numbers[i];
    }

    std::cout << std::endl;
}

void sortArray(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (numbers[i] > numbers[j])
            {
                numbers[i] ^= numbers[j];
                numbers[j] ^= numbers[i];
                numbers[i] ^= numbers[j];
            }
        }
    }
}

void printArray(const int arr[], int size)
{
    for (int i = 1; i <= size; i++)
    {
        std::cout << arr[i - 1] << " ";
    }

    std::cout << std::endl;
}