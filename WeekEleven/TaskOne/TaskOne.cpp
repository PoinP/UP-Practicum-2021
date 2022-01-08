#include <iostream>

void printArray(int* arr, int size);
void enterArray(int* arr, int size);

int main()
{
	int arraySize;

	std::cout << "Please enter array size: ";
	std::cin >> arraySize;

	int* arr = new int[arraySize];

	enterArray(arr, arraySize);
	printArray(arr, arraySize);

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