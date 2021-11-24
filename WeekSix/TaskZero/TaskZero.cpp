#include <iostream>

void enterArray(double[], const int);
void printArray(const double[], const int);
void reverseArray(double[], const int);
void swapMinAndMax(double[], const int);

double getMax(const double[], const int);
double getMin(const double[], const int);
double getFirstPositive(const double[], const int);
double getSumAfterFirstPositive(const double[], const int);

bool isArrayMirrored(const double[], int);
bool doesArrayHaveTwoConsecutiveZeros(const double[], const int);

const int ARRAY_SIZE = 100;

int main()
{
    double numbers[ARRAY_SIZE];

    int userSize;

    std::cout << "How many numbers do you want to enter[1 - 100]: ";

    do
    {
        std::cin >> userSize;
    } while (userSize < 1 || userSize > 100);

    enterArray(numbers, userSize);
    printArray(numbers, userSize);

    //Task Zero
    std::cout << "Task Zero:" << std::endl;
    std::cout << "Min: " << getMin(numbers, userSize) << std::endl;
    std::cout << "Max: " << getMax(numbers, userSize) << std::endl;
    std::cout << std::endl;
    
    //Task Two
    std::cout << "Task Two:" << std::endl;
    std::cout << "Does array have consecutive zeroes: " << std::boolalpha 
              << doesArrayHaveTwoConsecutiveZeros(numbers, userSize) << std::endl;
    std::cout << std::endl;

    //Task Three
    std::cout << "Task Three:" << std::endl;
    double firstPositive = getFirstPositive(numbers, userSize);
    if (firstPositive != 0)
    {
        double sumAfterPositive = getSumAfterFirstPositive(numbers, userSize);
        std::cout << "The first positive number in the array is: " << firstPositive << std::endl;
        std::cout << "And the sum of the numbers after it is: " << sumAfterPositive << std::endl;
    }
    else
    {
        std::cout << "There are no positive numbers in the array!" << std::endl;
    }
    std::cout << std::endl;

    //Task Six
    std::cout << "Task Six:" << std::endl;
    std::cout << "Is array mirrored: " << std::boolalpha 
              << isArrayMirrored(numbers, userSize) << std::endl;
    std::cout << std::endl;

    //Task One
    std::cout << "Task One:" << std::endl;
    std::cout << "Swapping min and max numbers from the array..." << std::endl;
    swapMinAndMax(numbers, userSize);

    std::cout << "This is how the array looks after the swap: " << std::endl;
    printArray(numbers, userSize);

    //Task Four
    std::cout << "Task Four:" << std::endl;
    std::cout << "Reversing the array after the swap..." << std::endl;
    reverseArray(numbers, userSize);

    std::cout << "This is how the array looks like after the reversal: " << std::endl;
    printArray(numbers, userSize);
}

void enterArray(double arr[], const int size)
{
    std::cout << "Please enter the elements of the array: " << std::endl;

    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << std::endl;

    return;
}

void printArray(const double arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl << std::endl;
}

void reverseArray(double arr[], const int size)
{
    double arrayCopy[ARRAY_SIZE];

    for (int i = 0; i < size; i++)
    {
        arrayCopy[i] = arr[i];
    }

    for (int i = size - 1; i >= 0; i--)
    {
        arr[size - i - 1] = arrayCopy[i];
    }
}

void swapMinAndMax(double arr[], const int size)
{
    int minIndex = 0, maxIndex = 0;

    double maxValue = getMax(arr, size);
    double minValue = getMin(arr, size);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == maxValue) maxIndex = i;
        if (arr[i] == minValue) minIndex = i;
    }

    if (minIndex != maxIndex)
    {
        double temp = arr[minIndex];
        arr[minIndex] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

double getMax(const double arr[], const int size)
{
    double max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (max < arr[i]) max = arr[i];
    }

    return max;
}

double getMin(const double arr[], const int size)
{
    double min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (min > arr[i]) min = arr[i];
    }

    return min;
}

double getFirstPositive(const double arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0) return arr[i];
    }

    return 0;
}

double getSumAfterFirstPositive(const double arr[], const int size)
{
    double sum = 0;

    if (!getFirstPositive(arr, size)) return sum;

    bool foundPositive = false;

    for (int i = 0; i < size; i++)
    {
        if (foundPositive) sum += arr[i];
        if (arr[i] > 0) foundPositive = true;
    }

    return sum;
}

bool doesArrayHaveTwoConsecutiveZeros(const double arr[], const int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == 0 && arr[i] == arr[i + 1]) return true;
    }

    return false;
}

bool isArrayMirrored(const double arr[], const int size)
{
    int halfSize = size / 2;

    for (int i = 0; i < halfSize; i++)
    {
        if (arr[i] != arr[size - i - 1]) return false;
    }

    return true;
}