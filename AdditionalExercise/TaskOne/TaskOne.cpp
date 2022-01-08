#include <iostream>

bool isZigZag(const int arr[], const int& size);
bool isZigZagRecursive(const int arr[], const int& size);

int main()
{
	int arr[] = { 1, 3, 2, 4, 3, 7 };

	std::cout << isZigZagRecursive(arr, 6);
}

bool isZigZag(const int arr[], const int& size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if ((i + 1) % 2 == 0)
		{
			if (arr[i] <= arr[i + 1])
				return false;
		}
		else
		{
			if (arr[i] >= arr[i + 1])
				return false;
		}
	}

	return true;
}

bool isZigZagRecursive(const int arr[], const int& size)
{
	if (size == 1)
		return true;

	if (size % 2 == 0)
	{
		if (arr[size - 2] < arr[size - 1])
			return isZigZagRecursive(arr, size - 1);
	}
	else
	{
		if (arr[size - 2] > arr[size - 1])
			return isZigZagRecursive(arr, size - 1);
	}

	return false;
}