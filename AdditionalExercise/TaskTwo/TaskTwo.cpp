#include <iostream>

bool isSymmetrical(const int arr[][3], const int& size);
bool isSymmetricalRecursive(const int arr[][3], const int& size);
bool areElementsSymmentrical(const int arr[][3], int size, int columnSize);

int main()
{
	int arr[3][3] = { 4, -5, 2,
					-5, 0, 1,
					2 , 1, 8 };

	std::cout << isSymmetricalRecursive(arr, 3);
}

bool isSymmetrical(const int arr[][3], const int& size)
{
	for (int row = 0; row < size; row++)
	{
		for (int column = 0; column < size; column++)
		{
			if (arr[row][column] != arr[column][row])
				return false;
		}
	}

	return true;
}

bool isSymmetricalRecursive(const int arr[][3], const int& size)
{
	int columnSize = size;

	return areElementsSymmentrical(arr, size, columnSize);
}

bool areElementsSymmentrical(const int arr[][3], int size, int columnSize)
{
	if (size == 0)
		return true;

	if (columnSize == 0)
	{
		size--;
		columnSize = size;
	}

	if (arr[size - 1][columnSize - 1] != arr[columnSize - 1][size - 1])
		return false;
	else
		return areElementsSymmentrical(arr, size, columnSize - 1);
}