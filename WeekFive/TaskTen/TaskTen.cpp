#include <iostream>

int reverseNumber(int);
bool canDivideByReversed(int);

int main()
{
	int number;
	
	std::cin >> number;

	std::cout << std::boolalpha << canDivideByReversed(number);

	std::cout << std::endl;
}


int reverseNumber(int number)
{
	int reversedNumber = 0;
	while (number > 0)
	{
		reversedNumber += number % 10;

		if (number / 10 > 0) reversedNumber *= 10;

		number /= 10;
	}

	return reversedNumber;
}

bool canDivideByReversed(int number)
{
	bool canDivideByReversed = true;
	int reversedNumber = reverseNumber(number);

	for (int i = 2; i <= reversedNumber; i++)
	{
		while (reversedNumber % i == 0)
		{
			if (number % i != 0)
			{
				canDivideByReversed = false;
				break;
			}

			number /= i;
			reversedNumber /= i;
		}

		if (!canDivideByReversed) break;
	}

	return canDivideByReversed;
}