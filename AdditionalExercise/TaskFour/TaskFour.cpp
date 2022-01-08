#include <iostream>

bool isAnagram(const char* firstString, const char* secondString);
bool compareLetters(char firstLetter, char secondLetter);
bool isLetter(char letter);

int main()
{
    std::cout << isAnagram("Astrsonomer", "Moon starer");
}


// This solution is shit and full with unneeded variables, but I am too lazy to change it rn

bool isAnagram(const char* firstString, const char* secondString)
{
	int firstStrCounter = 0;
	int secondStrCounter = 0;

	int firstStrIter = 0;
	int secondStrIter = 0;

	char currentLetter = 0;

	int outerFirstCounter = 0;
	int outerSecondCounter = 0;

	while (firstString[outerFirstCounter] != '\0' && secondString[outerSecondCounter] != '\0')
	{
		if (!isLetter(firstString[outerFirstCounter]))
			outerFirstCounter++;

		if (!isLetter(secondString[outerSecondCounter]))
			outerSecondCounter++;

		currentLetter = firstString[outerFirstCounter];

		while (firstString[firstStrIter] != '\0')
		{
			if (compareLetters(firstString[firstStrIter], currentLetter))
				firstStrCounter++;

			firstStrIter++;
		}

		while (secondString[secondStrIter] != '\0')
		{
			if (compareLetters(secondString[secondStrIter], currentLetter))
				secondStrCounter++;

			secondStrIter++;
		}

		if (firstStrCounter != secondStrCounter)
			return false;

		outerFirstCounter++;
		outerSecondCounter++;
		firstStrIter = 0;
		secondStrIter = 0;
		firstStrCounter = 0;
		secondStrCounter = 0;
	}

	return true;
}

bool compareLetters(char firstLetter, char secondLetter)
{
	int letterDifference = 'a' - 'A';

	if (firstLetter >= 'A' && firstLetter <= 'Z')
		firstLetter += letterDifference;

	if (secondLetter >= 'A' && secondLetter <= 'Z')
		secondLetter += letterDifference;

	return firstLetter == secondLetter;
}

bool isLetter(char letter)
{
	return letter >= 'A' && letter <= 'Z' || letter >= 'a' && letter <= 'z';
}