#include <iostream>

char* getCopy(const char* str);
int getStrLen(const char* str);

int main()
{
	char* string = getCopy("This is the original, baby!");

	std::cout << string;

	delete[] string;
}

char* getCopy(const char* str)
{
	int strLen = getStrLen(str);

	char* newStr = new char[strLen + 1];

	for (int i = 0; i < strLen; i++)
	{
		newStr[i] = str[i];
	}

	newStr[strLen] = '\0';

	return newStr;
}

int getStrLen(const char* str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	return length;
}
