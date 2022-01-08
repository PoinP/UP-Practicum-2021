#include <iostream>

bool isLetter(char letter);
bool compareLetters(char firstLetter, char secondLetter);
bool doesStringStartWithSubstring(const char* str, const char* substr);

int main()
{

    std::cout << doesStringStartWithSubstring("Gso to 210", "GsOT!!!");
}

bool doesStringStartWithSubstring(const char* str, const char* substr)
{
    if (*substr == '\0')
        return true;

    if (*str == '\0')
        return false;

    if (!isLetter(*str))
        return doesStringStartWithSubstring(++str, substr);

    if (!isLetter(*substr))
        return doesStringStartWithSubstring(str, ++substr);

    if (compareLetters(*str, *substr))
        return doesStringStartWithSubstring(++str, ++substr);

    return false;
}

bool isLetter(char letter)
{
    return letter >= 'A' && letter <= 'Z' || letter >= 'a' && letter <= 'z';
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