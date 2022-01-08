#include <iostream>

bool isSubset(const unsigned int subset[], const int& subsetSize, const unsigned int set[], const int& setSize);
bool isSubsetRecursive(const unsigned int subset[], const int& subsetSize, const unsigned int set[], const int& setSize);
bool containsElement(const unsigned int subsetElement, const unsigned int set[], const int& setSize);

int main()
{
	unsigned int subset[] = { 2, 1, 5, 4, 6 };
	unsigned int set[] = { 1, 2, 3, 4, 5, 6, 7, 18, 11 };

	std::cout << std::boolalpha << isSubsetRecursive(subset, 5, set, 9);
}

bool isSubset(const unsigned int subset[], const int& subsetSize, const unsigned int set[], const int& setSize)
{
	bool containsElement = false;

	for (int i = 0; i < subsetSize; i++)
	{
		for (int j = 0; j < setSize; j++)
		{
			if (subset[i] == set[j])
			{
				containsElement = true;
				break;
			}
		}

		if (!containsElement)
			return false;
	}

	return true;
}

bool isSubsetRecursive(const unsigned int subset[], const int& subsetSize, const unsigned int set[], const int& setSize)
{
	if (subsetSize == 0)
		return true;

	if (!containsElement(subset[subsetSize - 1], set, setSize))
		return false;
	else
		return isSubsetRecursive(subset, subsetSize - 1, set, setSize);
}

bool containsElement(const unsigned int subsetElement, const unsigned int set[], const int& setSize)
{
	if (setSize == 0)
		return false;

	if (subsetElement != set[setSize - 1])
		return containsElement(subsetElement, set, setSize - 1);
	else
		return true;
}