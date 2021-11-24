#include <iostream>

bool isConditionTrue(int);

int main()
{
	int userInput;

	std::cout << "Please enter a number: ";
	std::cin >> userInput;

    std::cout << "Is condition true: " << std::boolalpha << isConditionTrue(userInput);

	std::cout << std::endl;
}

bool isConditionTrue(int number)
{
	if (number < 100) return false;

	int digitOne = number % 10;
	number /= 10;

	int digitTwo = number % 10;
	number /= 10;

	while (number > 0)
	{
		if (digitOne + digitTwo != number % 10) return false;

		digitOne = digitTwo;
		digitTwo = number % 10;
		number /= 10;
	}

	return true;
}
