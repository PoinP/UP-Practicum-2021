#include <iostream>

void enterArray(int* arr, int arrSize);
int* getElementPointer(int* arr, int arrSize, int element);

int main()
{
	const int ARRAY_SIZE = 100;

	int arr[ARRAY_SIZE];
	int arrSize;

	std::cout << "Enter array size: ";
	std::cin >> arrSize;

	enterArray(arr, arrSize);

	int number;
	std::cout << "Which number are you searching for: ";
	std::cin >> number;

	int* ptr = getElementPointer(arr, arrSize, number);

	if (ptr) std::cout << *ptr;
}

void enterArray(int* arr, int arrSize)
{
	std::cout << "Enter array: ";
	for (int i = 0; i < arrSize; i++)
	{
		std::cin >> *(arr + i);
	}
}

int* getElementPointer(int* arr, int arrSize, int element)
{
	for (int i = 0; i < arrSize; i++)
	{
		if (*(arr + i) == element)
			return &(*(arr + i));
	}

	return nullptr;
}