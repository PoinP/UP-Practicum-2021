#include <iostream>

int main()
{
	int number;
	int digitSum = 0;

	std::cout << "Please eneter a natural number and I'll sum its digits: ";
	std::cin >> number;

	while (number > 0)
	{
		digitSum += number % 10;
		number /= 10;
	}

	std::cout << "The sum of digits is " << digitSum << std::endl;
}