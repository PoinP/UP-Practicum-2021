#include <iostream>

bool isPowerOfTwo(int number);

int main()
{
    std::cout << std::boolalpha << isPowerOfTwo(2048);
}

bool isPowerOfTwo(int n)
{
	if (n <= 0)
		return false;

	if (n == 2)
		return true;

	if (n % 2 != 0)
		return false;

	return isPowerOfTwo(n /= 2);
}