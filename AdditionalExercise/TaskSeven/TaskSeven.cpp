#include <iostream>

double getAverageWordLength(const char* string);

int main()
{
    std::cout << getAverageWordLength("Hello this is Zepp and I want to show you my newest invention. This is the cursed endanger machine which will destroy you!");
}

double getAverageWordLength(const char* string)
{
	int iter = 0;
	int charCount = 0;
	int wordCount = 0;

	bool isInWord = false;

	while (string[iter] != '\0')
	{
		bool isAtSymbol = string[iter] == '.' || string[iter] == '!' || string[iter] == '?' || string[iter] == ' ';
		bool isAtLetter = string[iter] >= 'A' && string[iter] <= 'Z' || string[iter] >= 'a' && string[iter] <= 'z';
		bool isAtEndOfString = string[iter + 1] == '\0';

		if (isAtLetter)
		{
			isInWord = true;
			charCount++;
		}
		
		if (isAtSymbol && isInWord || isAtEndOfString)
		{
			wordCount++;
			isInWord = false;
		}

		iter++;
	}

	return (double)charCount / wordCount;
}