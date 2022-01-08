#include <iostream>

void swapLetters(char* str, int nums[]);

int main()
{
	char str[] = "LoremIpsum";
	int nums[] = { 1, 0, 2, 5, 6, 2, 11, 9, 3, 3 };

	swapLetters(str, nums);

	std::cout << str;
}

void swapLetters(char* str, int nums[])
{
	if (*str == '\0')
		return;

	bool letterOverflow = *str + *nums >= 'z' || (*str + *nums >= 'Z' && *str + *nums < 'a');

	if (letterOverflow)
		*str += *nums - 26;
	else
		*str += *nums;

	swapLetters(++str, ++nums);
}