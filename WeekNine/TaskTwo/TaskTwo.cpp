#include <iostream>

void enterArray(int arr[], int size);
bool compareArrays(int arrayOne[], int arrayTwo[], int size);

int main()
{
    int firstRow[] = { 11, 72, 13, 14, 15 };

    const int rowSize = sizeof(firstRow) / sizeof(firstRow[0]);

    int secondRow[rowSize];

	enterArray(secondRow, rowSize);

	bool areEqual = compareArrays(firstRow, secondRow, rowSize);

	std::cout << std::boolalpha << areEqual;
}

void enterArray(int arr[], int size)
{
	std::cout << "Enter array: " << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cin >> *(arr + i);
	}
}

bool compareArrays(int arrayOne[], int arrayTwo[], int size)
{
	bool areEqual = false;
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			if (*(arrayOne + i) == *(arrayTwo + j))
			{
				areEqual = true;
				*(arrayTwo + i) ^= *(arrayTwo + j);
				*(arrayTwo + j) ^= *(arrayTwo + i);
				*(arrayTwo + i) ^= *(arrayTwo + j);
				break;
			}
		}
		if (!areEqual) 
			return areEqual;
		areEqual = false;
	}

	return true;
}