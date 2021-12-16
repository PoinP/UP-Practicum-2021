#include <iostream>

void printArray(const int* arr, int arrSize);
void enterArray(int* arr, int arrSize);
int* pointMinArray(int* firstArr, int firstArrSize, int* secondArr, int secondArrSize, int& ptrSize);

int main()
{
	const int MAX_SIZE = 100;

	int arrOne[MAX_SIZE];
	int arrOneSize;

	int arrTwo[MAX_SIZE];
	int arrTwoSize;

	std::cout << "Please enter array one size: ";
	std::cin >> arrOneSize;
	enterArray(arrOne, arrOneSize);

	std::cout << "Please enter array two size: ";
	std::cin >> arrTwoSize;
	enterArray(arrTwo, arrTwoSize);

	int ptrArrSize;

	int* ptrArr = pointMinArray(arrOne, arrOneSize, arrTwo, arrTwoSize, ptrArrSize);

	printArray(ptrArr, ptrArrSize);
}

void enterArray(int* arr, int arrSize)
{
	std::cout << "Enter array: " << std::endl;
	for (int i = 0; i < arrSize; i++)
	{
		std::cin >> *(arr + i);
	}
}

void printArray(const int* arr, int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		std::cout << *(arr + i) << " ";
	}
}

int* pointMinArray(int* firstArr, int firstArrSize, int* secondArr, int secondArrSize, int& ptrSize)
{
	int& longest = firstArrSize >= secondArrSize ? firstArrSize : secondArrSize;
	int& shortest = firstArrSize <= secondArrSize ? firstArrSize : secondArrSize;
	int* shorterArray = shortest == firstArrSize ? firstArr : secondArr;
	int* longerArray = shorterArray == firstArr ? secondArr : firstArr;

	int sum = 0;
	for (int i = 0; i < longest; i++)
	{
		if (i >= shortest)
			sum += *(longerArray + i);
		else
			sum = *(longerArray + i) - *(shorterArray + i);
	}

	ptrSize = sum <= 0 ? longest : shortest;

	return (sum <= 0 ? longerArray : shorterArray);
}