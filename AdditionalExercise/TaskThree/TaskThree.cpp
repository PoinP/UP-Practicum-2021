#include <iostream>

int calculateDiagonals(const int matrix[][3], const int& size);
bool isPowerOfTwo(int n);

int main()
{
	int matrix[][3] = { 1, 2, 3, 4, 12, 6, 7, 8, 9 };

    std::cout << calculateDiagonals(matrix, 3) << " " << isPowerOfTwo(calculateDiagonals(matrix, 3));
}

int calculateDiagonals(const int matrix[][3], const int& size)
{
	int diagonalSum = 0;

	for (int row = 0; row < size; row++)
	{
		for (int column = 0; column < size; column++)
		{
			if (row == column || row + column == size - 1)
				diagonalSum += matrix[row][column];
		}
	}

	return diagonalSum;
}

bool isPowerOfTwo(int n)
{
	if (n <= 0)
		return false;

	if (n == 2)
		return true;

	if (n % 2 != 0)
		return false;

	return isPowerOfTwo(n /= 2);
}