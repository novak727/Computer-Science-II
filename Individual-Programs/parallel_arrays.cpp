//************************************
// Name: Devin Kennedy
// Date: 1/13/2025
// Course: CS255-01 - Computer Science II
// Description: Parallel Arrays for student data
// File name: parallel_arrays.cpp
//************************************

#include <iostream>
#include <string>
using namespace std;

//************************************
// const DECLARATIONS
//************************************
const int SIZE = 3;

//************************************
// FUNCTION DECLARATIONS
//************************************
void findHighestAverage(string stuName[], float stuAvg[]);

//************************************
// DRIVER
//************************************
int main()
{
    // Declare parallel arrays
    string name[SIZE];
    float average[SIZE];
    char grade[SIZE];

    // get data from user
    for (int i=0; i<SIZE; i++)
    {
        cout << "Enter student's name " << i + 1 << ": ";
        cin >> name[i];

        cout << "Enter the average: ";
        cin >> average[i];

        cout << "Enter the grade: ";
        cin >> grade[i];        
    }

    // print data
    for (int i=0; i<SIZE; i++)
    {
        cout << "The name of the student is: " << name[i] << endl;
        cout << "The average of the student is: " << average[i] << endl;
        cout << "The grade of the student is: " << grade[i] << endl;
    }

    // Call function to find highest average
    findHighestAverage(name, average);
    
    return 0;
}

//************************************
// FUNCTION DEFINITIONS
//************************************
void findHighestAverage(string stuName[], float stuAvg[])
{
    int index = 0;

    for (int i=1; i<SIZE; i++)
        if (stuAvg[i] > stuAvg[index])
            index = i;

    cout << "The highest average was " << stuAvg[index] << " from " <<
        stuName[index] << endl;
}