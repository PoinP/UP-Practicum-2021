#include <iostream>

int* enterGrades(int** grades, const int& teachers);
void printGrades(int** grades, const int& teachers, const int* gradesLength);

int main()
{
    int teachers;

    std::cout << "How many teachers are going to enter grades: ";
    std::cin >> teachers;

    int** grades = new int*[teachers];

    int* enteredGrades = enterGrades(grades, teachers);

    printGrades(grades, teachers, enteredGrades);

    delete[] enteredGrades;

    for (int i = 0; i < teachers; i++)
    {
        delete[] grades[i];
    }

    delete[] grades;
}

int* enterGrades(int** grades, const int& teachers)
{
    int gradesToEnter;
    int enteredGrade;

    int *gradesLength = new int[teachers];

    for (int teacher = 0; teacher < teachers; teacher++)
    {
        std::cout << "Teacher " << teacher + 1 << ", how many grades do you want to enter: ";
        std::cin >> gradesToEnter;

        int* enteredGrades = new int[gradesToEnter];

        for (int grade = 0; grade < gradesToEnter; grade++)
        {
            std::cin >> enteredGrade;
            enteredGrades[grade] = enteredGrade;
        }

        grades[teacher] = enteredGrades;
        gradesLength[teacher] = gradesToEnter;
    }

    return gradesLength;
}

void printGrades(int** grades, const int& teachers, const int* gradesLength)
{
    for (int teacher = 0; teacher < teachers; teacher++)
    {
        std::cout << "Teacher " << teacher + 1 << " grades: ";
        for (int grade = 0; grade < gradesLength[teacher]; grade++)
        {
            std::cout << grades[teacher][grade] << " ";
        }

        std::cout << std::endl;
    }
}