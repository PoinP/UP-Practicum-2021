#include <iostream>

int getWordLength(const char* string, const int& startingIndex);
char* getLongestWord(char* string);

int main()
{
	char str[] = "Take my breath away!";

	char* longestWord = getLongestWord(str);

	std::cout << longestWord;
	
	delete[] longestWord;
}

char* getLongestWord(char* string)
{
	char* firstLetter = string;
	int longestWordLength = getWordLength(string, 0);
	int currentWordLength = longestWordLength;

	int iter = longestWordLength - 1;
	while (string[iter - 1] != '\0')
	{
		currentWordLength = getWordLength(string, iter);

		if(currentWordLength > longestWordLength)
		{
			longestWordLength = currentWordLength;
			firstLetter = &(string[iter]);
		}
			
		iter += currentWordLength + 1;
	}

	char* longestWord = new char[longestWordLength + 1];

	for (int i = 0; i < longestWordLength + 1; i++)
	{
		longestWord[i] = *(firstLetter + i);
	}

	longestWord[longestWordLength] = '\0';

	return longestWord;
}

int getWordLength(const char* string, const int& startingIndex)
{
	int length = 0;

	for (int i = startingIndex; string[i] != ' ' && string[i] != '\0'; i++)
	{
		length++;
	}

	return length;
}
