#include <iostream>

int compareStrings(const char* firstStr, const char* secondStr);
int getStrLen(const char* str);
int getMin(const int& x, const int& y);

int main()
{
    std::cout << compareStrings("This is a very nice text!", "This is a very nice text!");
}

int compareStrings(const char* firstStr, const char* secondStr)
{
	int firstStrLen = getStrLen(firstStr);
	int secondStrLen = getStrLen(firstStr);

	int minLen = getMin(firstStrLen, secondStrLen);

	for (int i = 0; i < minLen; i++)
	{
		if (firstStr[i] == secondStr[i])
			continue;

		if (firstStr[i] > secondStr[i])
			return 1;
		else
			return -1;
	}

	return 0;
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

int getMin(const int& x, const int& y)
{
	if (x >= y)
		return y;

	return x;
}