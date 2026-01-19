//************************************
// Name: Devin Kennedy
// Date: 1/15/2025
// Course: CS255-01 - Computer Science II
// Description: Struct for student data
// File name: struct_grades.cpp
//************************************
#include <iostream>
#include <string>
using namespace std;

//************************************
// struct DECLARATIONS
//************************************
struct student {
    string name;
    int id;
    float grade;
    string major;
};

//************************************
// const DECLARATIONS
//************************************
const int SIZE = 3;

//************************************
// FUNCTION DECLARATIONS
//************************************
float averageGrade(student students[]);
void updateGrade(student students[], int id, float newGrade);
float highestGrade(student students[]);

//************************************
// DRIVER
//************************************
int main()
{
    student students[] = {
        {"Alice", 100, 85.5, "Biology"},
        {"Bob", 101, 34.6, "Communications"},
        {"Charlie", 102, 92.0, "Computer Science"}
    };
    
    float avg = averageGrade(students);
    cout << "Average Grade: " << avg << endl;
    
    float highest = highestGrade(students);
    cout << "Highest Grade: " << highest << endl;
    
    return 0;
}

//************************************
// FUNCTION DEFINITIONS
//************************************
float averageGrade(student students[])
{
    float gradeTotal = 0;
    for (int i=0; i<SIZE; i++)
        gradeTotal = gradeTotal + students[i].grade;
    
    return gradeTotal / SIZE;
}

void updateGrade(student students[], int id, float newGrade)
{
    int tempID = 0;
    int index = -1;

    cout << "Enter the student's ID: ";
    cin >> tempID;

    for (int i=0; i<SIZE; i++)
        if (students[i].id == tempID)
            index = i;
    
    if (index == -1)
        cout << "ID not found" << endl;
    else
    {
        cout << "Enter the new grade: ";
        cin >> students[index].grade;
        cout << "Grade update successful" << endl;
    }
    
}

float highestGrade(student students[])
{
    float highest = -1;
    
    for (int i=0; i<SIZE; i++)
        if (students[i].grade > highest)
            highest = students[i].grade;
    
    return highest;
}