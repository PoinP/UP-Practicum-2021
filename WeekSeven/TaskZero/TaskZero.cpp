#include <iostream>

void enterArray(int[], int);

bool isZigZag(int[], int);

int main()
{
	const int ARRAY_SIZE = 100;
	int numbers[ARRAY_SIZE];
	int userSize;

	std::cout << "How many numbers do you want to enter[1-100]: ";

	do
	{
		std::cin >> userSize;
	} while (userSize < 1 || userSize > 100);

	enterArray(numbers, userSize);

	std::cout << "Is zigzag: " << (isZigZag(numbers, userSize) ? "YES" : "NO");

	std::cout << std::endl;
}

void enterArray(int numbers[], int size)
{
	std::cout << "Enter the array's elements: " << std::endl;

	for (int i = 0; i < size; i++)
	{
		std::cin >> numbers[i];
	}

	std::cout << std::endl;
}

bool isZigZag(int numbers[], int size)
{
	for (int i = 1; i < size; i++)
	{
		if (i % 2 != 0)
		{
			if (numbers[i - 1] >= numbers[i]) return false;
		}
		else
		{
			if (numbers[i - 1] <= numbers[i]) return false;
		}
	}

	return true;
}