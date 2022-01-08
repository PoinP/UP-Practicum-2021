#include <iostream>

void printArray(int* arr, int size);
void enterArray(int* arr, int size);
bool isInAscending(int* arr, int size);

int main()
{
	int arraySize;

	std::cout << "Enter array size: ";
	std::cin >> arraySize;

	int* arr = new int[arraySize];

	enterArray(arr, arraySize);
	printArray(arr, arraySize);

	std::cout << "\nss " << isInAscending(arr, arraySize);

	delete[] arr;
}

void printArray(int* arr, int size)
{
	if (size <= 0)
		return;

	printArray(arr, --size);
	std::cout << arr[size] << " ";
}

void enterArray(int* arr, int size)
{
	if (size <= 0)
		return;

	enterArray(arr, --size);
	std::cin >> arr[size];
}

bool isInAscending(int* arr, int size)
{
	if (size == 1)
		return true;

	if (arr[size - 1] > arr[size - 2])
		return isInAscending(arr, size - 1);

	return false;
}