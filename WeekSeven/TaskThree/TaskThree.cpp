#include <iostream>

void enterArray(const int[], const int);
void printArray(const int[], const int);

bool doesArrayContainNumber(const int[], const int, const int);

int getAmountAndSetNumberIndexes(const int[], const int, const int, int[]);


int main()
{
    const int ARRAY_SIZE = 100;

    int numbers[ARRAY_SIZE];
    int userSize;

    int number;

    std::cout << "How many numbers do you want to enter[1 - 100]: ";
    
    do
    {
        std::cin >> userSize;
    } while (userSize < 1 || userSize > 100);

    enterArray(numbers, userSize);

    std::cout << "Enter a number to be checked if it's in the array: ";
    std::cin >> number;

    if (doesArrayContainNumber(numbers, userSize, number))
    {
        int numberIndexes[ARRAY_SIZE];

        std::cout << "The array conatins your number! Its indexes inside the array are as follows:" << std::endl;
        
        int indexSize = getAmountAndSetNumberIndexes(numbers, userSize, number, numberIndexes);
        printArray(numberIndexes, indexSize);
    }
    else
    {
        std::cout << "The array doesn't conatins your number!" << std::endl;
    }
}

void printArray(const int arr[], const int size)
{
    for (int i = 1; i <= size; i++)
    {
        std::cout << arr[i - 1] << " ";
    }

    std::cout << std::endl;
}

void enterArray(int numbers[], const int size)
{
    std::cout << "Enter the array's elements: " << std::endl;

    for (int i = 0; i < size; i++)
    {
        std::cin >> numbers[i];
    }

    std::cout << std::endl;
}

bool doesArrayContainNumber(const int arr[], const int size, const int number)
{
    bool isNumberInArray = false;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number) isNumberInArray = true;
    }

    return isNumberInArray;
}

int getAmountAndSetNumberIndexes(const int arr[], const int size, const int number, int indexes[])
{
    int indexSize = 0;
    for (int i = 0, j = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            indexes[j] = i;
            indexSize++;
            j++;
        }
    }

    return indexSize;
}