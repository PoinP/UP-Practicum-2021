#include <iostream>

void evaluate(const char*);

int main()
{
	evaluate("3 Doors Down");
}

void evaluate(const char* str)
{
	int numberCount = 0;
	int upperCaseCount = 0;
	int lowerCaseCount = 0;

	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			numberCount++;
		else if (*str >= 'A' && *str <= 'Z')
			upperCaseCount++;
		else if (*str >= 'a' && *str <= 'z')
			lowerCaseCount++;

		str++;
	}

	std::cout << "Lowercase letters: " << lowerCaseCount << "\n" 
			  << "Uppercase letters: " << upperCaseCount << "\n" 
			  << "Numbers: " << numberCount << std::endl;
}
