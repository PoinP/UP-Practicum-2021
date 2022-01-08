#include <iostream>

bool containsSymbols(const char* firstStr, const char* secondStr);

int main()
{
    std::cout << containsSymbols("goodbook", "gbkod");
}

bool containsSymbols(const char* firstStr, const char* secondStr)
{
	if (*firstStr == '\0')
		return true;

	int iter = 0;
	while (secondStr[iter] != '\0')
	{
		if (secondStr[iter] == *firstStr)
			return containsSymbols(++firstStr, secondStr);

		iter++;
	}

	return false;
}