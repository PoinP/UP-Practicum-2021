#include <iostream>
#include <cmath>
#include <time.h>

void seedArray(int[], int);
void reverseArray(int[], int);
void printArray(const int[], int);

int main()
{
	const int ARRAY_SIZE = 5000;
	int numberArray[ARRAY_SIZE];
	int userSize;

	std::cout << "How big do you want the array to be[0 - 5000]: ";

	do
	{
		std::cin >> userSize;
	} while (userSize < 0 || userSize > 5000);

	seedArray(numberArray, userSize);
	printArray(numberArray, userSize);

	std::cout << std::endl;

	reverseArray(numberArray, userSize);
	printArray(numberArray, userSize);
}

void seedArray(int arr[], int sizeToSeed)
{
	std::srand((int)time(0));

	for (int i = 0; i < sizeToSeed; i++)
	{
		arr[i] = std::rand() % 10;
	}
}

void reverseArray(int arr[], int size)
{
	int temp = 0;
	for (int i = 0; i < size / 2; i++)
	{
		arr[i] ^= arr[size - i - 1];
		arr[size - i - 1] ^= arr[i];
		arr[i] ^= arr[size - i - 1];
	}
}

void printArray(const int arr[], int size)
{
	for (int i = 1; i <= size; i++)
	{
		std::cout << arr[i - 1] << " ";

		if (i % 50 == 0) std::cout << std::endl;
	}

	std::cout << std::endl;
}