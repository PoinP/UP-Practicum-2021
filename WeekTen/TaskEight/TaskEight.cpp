#include <iostream>

void appendString(char*& firstString, const char* secondString);
int getStrLen(const char* str);

int main()
{
	char* str = new char[] { "Hello" };
	char str1[] = "heiio";

	appendString(str, str1);

	std::cout << str;

	delete[] str;
}

void appendString(char*& firstString, const char* secondString)
{
	int firstStringLen = getStrLen(firstString);
	int secondStringLen = getStrLen(secondString);

	char* newString = new char[(firstStringLen + secondStringLen) + 1];

	for (int i = 0; i < firstStringLen; i++)
	{
		newString[i] = firstString[i];
	}

	for (int i = 0; i < secondStringLen; i++)
	{
		newString[firstStringLen + i] = secondString[i];
	}

	newString[(firstStringLen + secondStringLen) - 1];

	delete[] firstString;

	firstString = new char[firstStringLen + secondStringLen + 1];

	for (int i = 0; i < getStrLen(newString) - 1; i++)
	{
		firstString[i] = newString[i];
	}

	firstString[firstStringLen + secondStringLen] = '\0';
	delete[] newString;
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