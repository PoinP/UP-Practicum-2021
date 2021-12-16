#include <iostream>

const int MATRIX_SIZE = 20;

void fillMatrix(int(*matrix)[MATRIX_SIZE], int size);
void printMatrix(int(*matrix)[MATRIX_SIZE], int size);


int main()
{
	int matrix[MATRIX_SIZE][MATRIX_SIZE];

	fillMatrix(matrix, MATRIX_SIZE);
	printMatrix(matrix, MATRIX_SIZE);
}

void fillMatrix(int (*matrix)[MATRIX_SIZE], int size)
{
	for (int row = 0; row < size; row++)
	{
		for (int column = 0; column < size; column++)
		{
			if (row + column < size - 1)
				(*(matrix + row))[column] = 0;
				//*(*(matrix + row) + column) = 0;
			if (row + column == size - 1)
				(*(matrix + row))[column] = 1;
				//*(*(matrix + row) + column) = 1;
			if (row + column >= size)
				(*(matrix + row))[column] = 2;
			    //*(*(matrix + row) + column) = 2;
		}
	}
}

void printMatrix(int(*matrix)[MATRIX_SIZE], int size)
{
	for (int row = 0; row < size; row++)
	{
		for (int column = 0; column < size; column++)
		{
			std::cout << (*(matrix + row))[column] << " ";
						//*(*(matrix + row) + column)
		}

		std::cout << std::endl;
	}
}