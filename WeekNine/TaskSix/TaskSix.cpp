#include <iostream>

char getUniqueChar(char* string);

int main()
{
	char string[100];
	std::cin.get(string, 100);

	std::cout << getUniqueChar(string);
}

char getUniqueChar(char* string)
{
	char currentChar;
	while (*string != '\0')
	{
		currentChar = *string;
		for (int i = 1; *(string + i) != '\0'; i++)
		{
			if (currentChar == *(string + i)) 
			{
				currentChar = '\0';
				break;
			}
		}

		if (currentChar != '\0') return currentChar;

		string++;
	}

	return '\0';
}

