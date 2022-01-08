#include <iostream>

int getCharCount(const char* str);

int main()
{
    std::cout << getCharCount("Hello World!");
}

int getCharCount(const char* str)
{
    int iter = 0;

	while (str[iter] != '\0')
	{
		iter++;
	}

	return iter;
}