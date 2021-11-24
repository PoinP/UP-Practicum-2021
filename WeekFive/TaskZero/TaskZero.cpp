#include <iostream>

int findFib(int);

int main()
{
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << findFib(number) << std::endl;
}

int findFib(int number)
{
    int termOne = 0, termTwo = 1, nextTerm = 0;

    for (int i = 1; i < number; i++) 
    {
        if (number == 1) return termOne;
        if (number == 2) return termTwo;

        nextTerm = termOne + termTwo;
        termOne = termTwo;
        termTwo = nextTerm;
    }

    return nextTerm;
}