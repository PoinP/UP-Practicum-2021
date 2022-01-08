#include <iostream>

int* createArray(int* arr, const int& arrSize);
void printArray(const int* arr, const int& size);

int main()
{
	int firstArray[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int firstArraySize = sizeof(firstArray) / sizeof(firstArray[0]);

	int* newArray = createArray(firstArray, firstArraySize);
	printArray(newArray, firstArraySize / 2);

	delete[] newArray;
}

void printArray(const int* arr, const int& size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}

int* createArray(int* arr, const int& arrSize)
{
    int* newArray = new int[arrSize / 2];

	for (int i = 0; i < (arrSize / 2); i++)
	{
		newArray[i] = arr[i];
	}

	return newArray;
}