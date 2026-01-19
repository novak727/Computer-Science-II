//************************************
// Name: Devin Kennedy
// Date: 1/27/2025
// Course: CS255-01 - Computer Science II
// Description: Parallel Arrays with Singer information read from files
// File name: zyLab01_ParallelArrays.cpp
//************************************

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

//************************************
// const DECLARATIONS
//************************************
const int MAX = 20;

//************************************
// FUNCTION DECLARATIONS
//************************************
void ReadDataFromFiles(string singersArray[], int hitsArray[], double salesArray[], int fileCount, int& size);
void PrintArraysForward(string singersArray[], int hitsArray[], double salesArray[], int size);
void PrintArraysBackward(string singersArray[], int hitsArray[], double salesArray[], int size);
void SortArrays(string singersArray[], int hitsArray[], double salesArray[], int size);

//************************************
// DRIVER
//************************************
int main()
{
    // Variable declarations
    string singers[MAX];
    int hits[MAX];
    double sales[MAX];
    int fileNameCount = 0;
    int size = 0; // Actual array size (number of added elements to each array)

    // File count entered by user for file names in function
    cout << "Enter file name count: ";
    cin >> fileNameCount;

    // Call to ReadDataFromFiles
    cout << "Reading Files" << endl;
    ReadDataFromFiles(singers, hits, sales, fileNameCount, size);

    // Call to PrintArraysForward
    cout << "Printing Forward" << endl;
    PrintArraysForward(singers, hits, sales, size);

    // Call to PrintArraysBackward
    cout << "Printing Backward" << endl;
    PrintArraysBackward(singers, hits, sales, size);

    // Call to SortingArrays
    cout << "Sorting Arrays" << endl;
    SortArrays(singers, hits, sales, size);

    // Call to PrintArraysForward after sorting
    cout << "Printing Forward" << endl;
    PrintArraysForward(singers, hits, sales, size);

    // Call to PrintArraysBackward after sorting
    cout << "Printing Backward" << endl;
    PrintArraysBackward(singers, hits, sales, size);

    return 0;
}

//************************************
// FUNCTION DEFINITIONS
//************************************
void ReadDataFromFiles(string singersArray[], int hitsArray[], double salesArray[], int fileCount, int& size) {
    // Variable declarations
    ifstream singersFile;
    ifstream hitsFile;
    ifstream salesFile;

    // Open files. Use to_string to convert the fileCount int to create a complete string for each file name
    singersFile.open("names" + to_string(fileCount) + ".txt");
    hitsFile.open("hits" + to_string(fileCount) + ".txt");
    salesFile.open("sales" + to_string(fileCount) + ".txt");

    // Add each line of each file as an element to the appropriate array
    for (int i = 0; i < MAX; i++) {
        if (!singersFile.eof() && !hitsFile.eof() && !salesFile.eof()) {
            singersFile >> singersArray[i];
            hitsFile >> hitsArray[i];
            salesFile >> salesArray[i];
            size++; // Increment number of elements added to each array
        }
    }

    // Close all files
    singersFile.close();
    hitsFile.close();
    salesFile.close();
}

void PrintArraysForward(string singersArray[], int hitsArray[], double salesArray[], int size) {
    cout << "Name\t\tHit Count" << setw(15) << "Sales" << endl; // Header
    // Print each singer's information on a separate line in the current order of the array
    for (int i = 0; i < size; i++) {
        cout << singersArray[i] << "\t\t" << hitsArray[i] << "\t\t" << setw(15) << right << setprecision(2) << fixed << salesArray[i] << endl;
    }
}

void PrintArraysBackward(string singersArray[], int hitsArray[], double salesArray[], int size) {
    cout << "Name\t\tHit Count" << setw(15) << "Sales" << endl; // Header
    // Print each singer's information on a separate line in the current backwards order of the array
    for (int i = size - 1; i >= 0; i--) {
        cout << singersArray[i] << "\t\t" << hitsArray[i] << "\t\t" << setw(15) << right << setprecision(2) << fixed << salesArray[i] << endl;
    }
}

void SortArrays(string singersArray[], int hitsArray[], double salesArray[], int size) {
    // Variable declarations
    int index = 0;
    string singersTemp = "?"; // temporarily stores a string while swapping, for singersArray
    int hitsTemp = 0; // temporarily stores an int while swapping, for hitsArray
    double salesTemp = 0.0; // temporarily stores a double while swapping, for salesArray

    // Selection sort
    for (int i = 0; i < size; i++) {
        index = i;
        for (int j = i + 1; j < size; j++) {
            if (hitsArray[j] > hitsArray[index]) {
                index = j;
            }
        }

        // Switch elements in each of the arrays
        singersTemp = singersArray[i];
        singersArray[i] = singersArray[index];
        singersArray[index] = singersTemp;

        hitsTemp = hitsArray[i];
        hitsArray[i] = hitsArray[index];
        hitsArray[index] = hitsTemp;

        salesTemp = salesArray[i];
        salesArray[i] = salesArray[index];
        salesArray[index] = salesTemp;
    }
}