//************************************
// Name: Devin Kennedy
// Date: 1/17/2025
// Course: CS255-01 - Computer Science II
// Description: Array of student data using a struct
// File name: array_struct.cpp
//************************************

#include <iostream>
#include <string>
using namespace std;

//************************************
// struct DECLARATIONS
//************************************
struct Student{
    string name;
    double grade;
};

//************************************
// const DECLARATIONS
//************************************
const int MAX = 10;

//************************************
// FUNCTION DECLARATIONS
//************************************
void FillArray(Student stuList[], int& size);
void PrintArray(Student stuList[], int size);
int GetMax(Student stuList[], int size);

//************************************
// DRIVER
//************************************
int main()
{
    Student stuList[MAX];
    int size = 0;
    
    FillArray(stuList, size);
    PrintArray(stuList, size);

    int maxIndex = GetMax(stuList, size);
    cout << "Index: " << maxIndex << endl;
    cout << stuList[maxIndex].name << " has the max grade of " <<
        stuList[maxIndex].grade << endl;

    return 0;
}

//************************************
// FUNCTION DEFINITIONS
//************************************
void FillArray(Student stuList[], int& size){
    cout << "Enter number of items, less than " << MAX + 1 << endl;
    cin >> size;

    if (size < 0 || size > MAX)
        size = MAX;

    for (int i = 0; i < size; i++){
        cout << "Enter name: ";
        cin >> stuList[i].name;
        cout << "Enter grade: ";
        cin >> stuList[i].grade;
    }
}

void PrintArray(Student stuList[], int size){
    for (int i = 0; i < size; i++)
        cout << stuList[i].name << "\t" << stuList[i].grade << endl;
}

int GetMax(Student stuList[], int size){
    int maxIndex = 0;
    
    for (int i = 1; i < size; i++){
        if (stuList[i].grade > stuList[maxIndex].grade)
            maxIndex = i;
    }

    return maxIndex;
}