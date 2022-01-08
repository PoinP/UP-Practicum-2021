#include <iostream>

int getStrLen(const char* str);
void copyStr(char* &firstStr, const char* secondStr);

int main()
{
	char* str = new char[] { "Hello" };
	char str1[] = "heiio";
	
	copyStr(str, str1);

	std::cout << str;

	delete[] str;
}

void copyStr(char* &firstStr, const char* secondStr)
{
	delete[] firstStr;

	int strLen = getStrLen(secondStr);

	firstStr = new char[strLen + 1];

	for (int i = 0; i < strLen; i++)
	{
		firstStr[i] = secondStr[i];
	}

	firstStr[strLen] = '\0';
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