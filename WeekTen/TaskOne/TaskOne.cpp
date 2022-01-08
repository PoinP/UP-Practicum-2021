#include <iostream>

void printArray(const int* arr, const int& size);
int* getCopy(const int* arr, const int& size);

int main()
{
	int firstArray[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int firstArraySize = sizeof(firstArray) / sizeof(firstArray[0]);

	int* newArray = getCopy(firstArray, firstArraySize);
	printArray(newArray, firstArraySize);

	delete[] newArray;
}

void printArray(const int* arr, const int& size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}

int* getCopy(const int* arr, const int& size)
{
    int* newArray = new int[size];

	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];
	}

	return newArray;
}