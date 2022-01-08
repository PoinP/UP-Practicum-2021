#include <iostream>

struct StackedQueue
{
    int* stackedQueue = new int[0];
    int capacity = 0;
    int size = 0;
};

void initializeStackedQueue(StackedQueue& arr)
{
    delete[] arr.stackedQueue;
    arr.stackedQueue = new int[5];

    for (int i = 0; i < 5; i++)
    {
        arr.stackedQueue[i] = i + 1;
    }

    arr.size = 5;
    arr.capacity = 5;
}

void doubleStackSize(StackedQueue& arr)
{
    int* copyQueue = new int[arr.size];

    for (int i = 0; i < arr.size; i++)
    {
        copyQueue[i] = arr.stackedQueue[i];
    }

    delete[] arr.stackedQueue;

    arr.capacity *= 2;
    arr.stackedQueue = new int[arr.capacity];

    for (int i = 0; i < arr.size; i++)
    {
        arr.stackedQueue[i] = copyQueue[i];
    }

    delete[] copyQueue;
}

void unshiftQueue(StackedQueue& arr)
{
    if (arr.size == arr.capacity)
        doubleStackSize(arr);
   
    for (int i = arr.size; i >= 0; i--)
    {
        arr.stackedQueue[i] = arr.stackedQueue[i - 1];
    }
}

void shiftQueue(StackedQueue& arr)
{
    for (int i = 1; i < arr.size; i++)
    {
        arr.stackedQueue[i - 1] = arr.stackedQueue[i];
    }
}


//Task 5
void pushBack(StackedQueue& arr, const int& number)
{
    if (arr.size == arr.capacity)
    {
        doubleStackSize(arr);
    }

    arr.size++;
    arr.stackedQueue[arr.size - 1] = number;
}

//Task 6
void pushFront(StackedQueue& arr, const int& number)
{
    if (arr.size == arr.capacity)
    {
        doubleStackSize(arr);
    }

    unshiftQueue(arr);

    arr.size++;
    arr.stackedQueue[0] = number;
}


//Task 7
void popBack(StackedQueue& arr)
{
    arr.size--;
    arr.stackedQueue[arr.size] = 0;
}


//Task 8
void popFront(StackedQueue& arr)
{
    shiftQueue(arr);

    arr.size--;
    arr.stackedQueue[arr.size] = 0;
}

void printStackQueue(const StackedQueue& arr)
{
    for (int i = 0; i < arr.size; i++)
    {
        std::cout << arr.stackedQueue[i] << " ";
    }

    std::cout << "\n";
}

int main()
{
    StackedQueue arr;
    initializeStackedQueue(arr);

    printStackQueue(arr);

    popFront(arr);
    printStackQueue(arr);

    pushBack(arr, 8);
    printStackQueue(arr);

    pushFront(arr, 99);
    printStackQueue(arr);

    popBack(arr);
    printStackQueue(arr);

    delete[] arr.stackedQueue;
}

