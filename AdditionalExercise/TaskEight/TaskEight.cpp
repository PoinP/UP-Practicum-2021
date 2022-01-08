#include <iostream>

void changeLetters(char* string, const bool values[]);

int main()
{
	char str[] = "Lorem Ipsum";
	bool values[] = { false, true, true, false, true, true, true, false, false, false, false };

	changeLetters(str, values);

	std::cout << str;
}

void changeLetters(char* string, const bool values[])
{
	if (*string == '\0')
		return;

	if (*values)
	{
		if (*string >= 'a' && *string <= 'z')
			*string -= 32;
	}

	changeLetters(++string, ++values);
}