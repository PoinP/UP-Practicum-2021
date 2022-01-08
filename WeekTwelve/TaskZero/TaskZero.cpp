#include <iostream>

void makeCapital(char* baseString, const char* capitalLetters);

int main()
{
	char baseString[] = "hello universe!";
	char capitalLetters[] = "hee u";

	std::cout << baseString << "\n";

	makeCapital(baseString, capitalLetters);

	std::cout << baseString;
}

void makeCapital(char* baseString, const char* capitalLetters)
{
	const char* startingAddress = capitalLetters;

	while (*baseString != '\0')
	{
		while (*capitalLetters != '\0')
		{
			char capitalLetter;

			if (*capitalLetters >= 'A' && *capitalLetters <= 'Z')
				capitalLetter = *capitalLetters + ('a' - 'A');
			else if (*capitalLetters >= 'a' && *capitalLetters <= 'z')
				capitalLetter = *capitalLetters;
			else
				capitalLetter = '\0';

			if (capitalLetter == *baseString)
				*baseString -= ('a' - 'A');

			capitalLetters++;
		}

		baseString++;
		capitalLetters = startingAddress;
	}
}