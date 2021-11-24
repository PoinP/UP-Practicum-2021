#include <iostream>
#include <time.h>
#include <cmath>

//Must be a square matrix!
const int ROWS = 10;
const int COLUMNS = 10;
const int DIAGONALS = 2;

void printMatrix(const int[ROWS][COLUMNS]);
void seedMatrix(int[ROWS][COLUMNS]);

//Task Four
void sumMatrixRows(const int[ROWS][COLUMNS], int[ROWS]);
void printRowSummary(const int[ROWS]);

//Task Five
void sumMatrixDiagonals(const int[ROWS][COLUMNS], int[DIAGONALS]);
void printDiagonalSummary(const int[DIAGONALS]);
void printColumnSummary(const int[ROWS]);


//Task Six
void printMatrixWithNewElements(const int[ROWS][COLUMNS], int);

//Task Seven
int getMinOfMatrix(const int[ROWS][COLUMNS]);
int getMaxOfMatrix(const int[ROWS][COLUMNS]);

//Task Eight
void makeAndPrintAllOfTheFancyCalculations(const int[ROWS][COLUMNS]);

//Task Nine
bool isNumberInMatrix(const int[ROWS][COLUMNS], const int, int[2]);

int main()
{
    int matrix[ROWS][COLUMNS];

	seedMatrix(matrix);
	printMatrix(matrix);

	//Task Four
	int matrixRowSummary[ROWS];
	sumMatrixRows(matrix, matrixRowSummary);
	printRowSummary(matrixRowSummary);

	//Task Five
	int diagonalSummary[DIAGONALS];
	sumMatrixDiagonals(matrix, diagonalSummary);
	printDiagonalSummary(diagonalSummary);

	//Task Seven
	std::cout << "Max element of matrix is: " << getMaxOfMatrix(matrix) << std::endl;
	std::cout << "Min element of matrix is: " << getMinOfMatrix(matrix) << std::endl;

	std::cout << std::endl;

	//Task Eight
	makeAndPrintAllOfTheFancyCalculations(matrix);

	//Task Nine
	int numberIndexes[2];
	int userNumber;

	std::cout << "Enter a number to be checked if it's in the matrix: ";
	std::cin >> userNumber;

	if (isNumberInMatrix(matrix, userNumber, numberIndexes))
	{
		int firstIndex = numberIndexes[0];
		int secondIndex = numberIndexes[1];

		std::cout << "The number is at position [" << firstIndex << "][" << secondIndex << "]" << std::endl;
		matrix[firstIndex][secondIndex] *= 10;

		printMatrix(matrix);
	}
	else
	{
		std::cout << "This number is not an element of the matrix!" << std::endl << std::endl;;
	}

	//Task Six
	//Adding 10 to the matrix
	std::cout << "Addition!" << std::endl << std::endl;
	const int ADDITION = 10;
	printMatrixWithNewElements(matrix, ADDITION);
}

void printMatrix(const int matrix[ROWS][COLUMNS])
{
	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			std::cout << matrix[row][column] << " ";
		}

		std::cout << std::endl;
	}

	std::cout << std::endl;
}

void seedMatrix(int matrix[ROWS][COLUMNS])
{
	srand(time(0));

	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			int randomNumber = rand() % 100;
			matrix[row][column] = (randomNumber > 70 ? randomNumber - 10 : randomNumber + 10); //The only reason for this is so that the matrix can look good and tidy in the console :>
		}
	}
}

void sumMatrixRows(const int matrix[ROWS][COLUMNS], int rowSums[ROWS])
{
	int sum = 0;

	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			sum += matrix[row][column];
		}

		rowSums[row] = sum;
		sum = 0;
	}
}

void printRowSummary(const int rowSums[ROWS])
{
	for (int row = 0; row < ROWS; row++)
	{
		std::cout << "| Row[" << row + 1 << "] = " << rowSums[row] << " | " << std::endl;
	}

	std::cout << std::endl;
}

void printColumnSummary(const int columnSums[ROWS])
{
	for (int row = 0; row < COLUMNS; row++)
	{
		std::cout << "| Column[" << row + 1 << "] = " << columnSums[row] << " | " << std::endl;
	}

	std::cout << std::endl;
}

void sumMatrixDiagonals(const int matrix[ROWS][COLUMNS], int diagonalSums[DIAGONALS])
{
	int diagonalOneSum = 0;
	int diagonalTwoSum = 0;

	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			if (row == column) diagonalOneSum += matrix[row][column];
			else if (row + column == ROWS - 1) diagonalTwoSum += matrix[row][column];
		}
	}

	diagonalSums[0] = diagonalOneSum;
	diagonalSums[1] = diagonalTwoSum;
}

void printDiagonalSummary(const int diagonalSums[DIAGONALS])
{
	for (int diagonal = 0; diagonal < DIAGONALS; diagonal++)
	{
		std::cout << "| Diagonal[" << diagonal + 1 << "] = " << diagonalSums[diagonal] << " | " << std::endl;
	}

	std::cout << std::endl;
}

void printMatrixWithNewElements(const int matrix[ROWS][COLUMNS], const int addition)
{
	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			std::cout << matrix[row][column] + addition << " ";
		}

		std::cout << std::endl;
	}

	std::cout << std::endl;
}

int getMinOfMatrix(const int matrix[ROWS][COLUMNS])
{
	int min = matrix[0][0];

	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			if (min > matrix[row][column]) min = matrix[row][column];
		}
	}

	return min;
}

int getMaxOfMatrix(const int matrix[ROWS][COLUMNS])
{
	int max = matrix[0][0];

	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			if (max < matrix[row][column]) max = matrix[row][column];
		}
	}

	return max;
}

void makeAndPrintAllOfTheFancyCalculations(const int matrix[ROWS][COLUMNS])
{
	int rowSummary[ROWS];
	int columnSummary[COLUMNS];
	int diagonalSummary[DIAGONALS];
	int underAndOverMainDiagonalSummary[DIAGONALS];
	int underAndOverSecondaryDiagonalSummary[DIAGONALS];

	int rowSum = 0;

	int mainDiagonalSum = 0;
	int secondaryDiagonalSum = 0;

	int underMainDiagonalSum = 0;
	int overMainDiagonalSum = 0;

	int underSecondaryDiagonalSum = 0;
	int overSecondaryDiagonalSum = 0;

	for (int i = 0; i < COLUMNS; i++)
	{
		columnSummary[i] = 0;
	}
	

	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			rowSum += matrix[row][column];
			columnSummary[column] += matrix[row][column];

			if (row == column) mainDiagonalSum += matrix[row][column];
			else if (row + column == ROWS - 1) secondaryDiagonalSum += matrix[row][column];

			if (row > column) underMainDiagonalSum += matrix[row][column];
			else if (row < column) overMainDiagonalSum += matrix[row][column];

			if (column + row >= ROWS) underSecondaryDiagonalSum += matrix[row][column];
			else if (column + row < ROWS - 1) overSecondaryDiagonalSum += matrix[row][column];
		}

		rowSummary[row] = rowSum;
		rowSum = 0;
	}

	diagonalSummary[0] = mainDiagonalSum;
	diagonalSummary[1] = secondaryDiagonalSum;

	underAndOverMainDiagonalSummary[0] = underMainDiagonalSum;
	underAndOverMainDiagonalSummary[1] = overMainDiagonalSum;

	underAndOverSecondaryDiagonalSummary[0] = underSecondaryDiagonalSum;
	underAndOverSecondaryDiagonalSummary[1] = overSecondaryDiagonalSum;

	std::cout << "Results from the big function: " << std::endl;

	std::cout << "Row summary: " << std::endl;
	printRowSummary(rowSummary);

	std::cout << "Column summary: " << std::endl;
	printColumnSummary(columnSummary);

	std::cout << "Main and secondary diagonal: " << std::endl;
	printDiagonalSummary(diagonalSummary);

	std::cout << "Under and over main diagonal: " << std::endl;
	printDiagonalSummary(underAndOverMainDiagonalSummary);

	std::cout << "Under and over secondary diagonal: " << std::endl;
	printDiagonalSummary(underAndOverSecondaryDiagonalSummary);
}

bool isNumberInMatrix(const int matrix[ROWS][COLUMNS], const int number, int numberIndexes[2])
{
	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			if (matrix[row][column] == number)
			{
				numberIndexes[0] = row;
				numberIndexes[1] = column;
				return true;
			}
		}
	}

	return false;
}
