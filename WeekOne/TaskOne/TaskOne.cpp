#include <iostream>

int main()
{
	int number;

	std::cout << "Please enter a 4-digit number: ";

	while (true) 
	{
		std::cin >> number;

		if (number < 0) number *= -1;
		if (number > 999 && number < 10000) break;

		std::cout << "The number must be a 4-digit one! Try again: ";
	}

	int firstDigit = number % 10;
	int secondDigit = number / 10 % 10;
	int thirdDigit = number / 100 % 10;
	int fourthDigit = number / 1000;

	int sum  = firstDigit + secondDigit + thirdDigit + fourthDigit;

	std::cout << sum << std::endl;

	int reverse = firstDigit * 1000 
		+ secondDigit * 100 
		+ thirdDigit * 10 
		+ fourthDigit;

	std::cout << reverse << std::endl;
}