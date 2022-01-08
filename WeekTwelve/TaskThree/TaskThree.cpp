#include <iostream>

void enterArray(int arr[], const int& size);
double calculateAverage(int arr[], const int& size);

int main()
{
    int gradeCount;

    std::cout << "How many grades do you want to enter: ";
    std::cin >> gradeCount;

    int* grades = new int[gradeCount];

    std::cout << "Enter grades: ";
    enterArray(grades, gradeCount);

    double averageGrade = calculateAverage(grades, gradeCount);

    std::cout << "Average grade: " << averageGrade << std::endl;

    delete[] grades;
}

void enterArray(int arr[], const int& size)
{
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << std::endl;
}

double calculateAverage(int arr[], const int& size)
{
    double average = 0;

    for (int i = 0; i < size; i++)
    {
        average += arr[i];
    }

    return average / size;
}