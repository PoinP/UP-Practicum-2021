#include <iostream>

int main()
{
	int number;
	
	std::cout << "Enter a number: ";
	std::cin >> number;

	for (int i = 2; i <= number; i++)
	{
		while (number % i == 0)
		{
			std::cout << i << ",";
			number /= i;
		}
	}
}