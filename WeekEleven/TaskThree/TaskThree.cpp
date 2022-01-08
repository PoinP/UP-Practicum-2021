#include <iostream>

void printArray(int* arr, int size);
void enterArray(int* arr, int size);

int findMin(int* arr, int size);

int main()
{
	int arraySize;

	std::cout << "Please enter array size: ";
	std::cin >> arraySize;

	int* arr = new int[arraySize];

	enterArray(arr, arraySize);

	std::cout << "\n";
	std::cout << findMin(arr, arraySize);

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

int findMin(int* arr, int size)
{
	if (size <= 0)
		return INT_MAX;

	size--;
	int min = findMin(arr, size);

	if (arr[size] < findMin(arr, size))
		return arr[size];
	else
		return min;
}