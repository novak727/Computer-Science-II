//************************************
// Name: Devin Kennedy
// Date: 1/29/2025
// Course: CS255-01 - Computer Science II
// Description: Array to hold singer information stored in an struct
// File name: zyLab02_ArrayofStructs.cpp
//************************************

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

//************************************
// struct DECLARATIONS
//************************************
struct Singer {
    string name;
    int hits;
    double sales;
};

//************************************
// const DECLARATIONS
//************************************
const int MAX = 20;

//************************************
// FUNCTION DECLARATIONS
//************************************
void ReadDataFromFiles(Singer singersArr[], int fileCount, int& size);
void PrintArraysForward(Singer singersArr[], int size);
void PrintArraysBackward(Singer singersArr[], int size);
void SortArrays(Singer singersArr[], int size);

//************************************
// DRIVER
//************************************
int main()
{
    // Variable declarations
    Singer singerList[MAX];
    int fileNameCount = 0;
    int size = 0; // Actual array size (number of added elements to each array)

    // File count entered by user for file names in function
    cout << "Enter file name count: ";
    cin >> fileNameCount;

    // Call to ReadDataFromFiles
    cout << "Reading Files" << endl;
    ReadDataFromFiles(singerList, fileNameCount, size);

    // Call to PrintArraysForward
    cout << "Printing Forward" << endl;
    PrintArraysForward(singerList, size);

    // Call to PrintArraysBackward
    cout << "Printing Backward" << endl;
    PrintArraysBackward(singerList, size);

    // Call to SortingArrays
    cout << "Sorting Arrays" << endl;
    SortArrays(singerList, size);

    // Call to PrintArraysForward after sorting
    cout << "Printing Forward" << endl;
    PrintArraysForward(singerList, size);

    // Call to PrintArraysBackward after sorting
    cout << "Printing Backward" << endl;
    PrintArraysBackward(singerList, size);

    return 0;
}

//************************************
// FUNCTION DEFINITIONS
//************************************
void ReadDataFromFiles(Singer singersArr[], int fileCount, int& size) {
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
            singersFile >> singersArr[i].name;
            hitsFile >> singersArr[i].hits;
            salesFile >> singersArr[i].sales;
            size++; // Increment number of elements added to each array
        }
    }

    // Close all files
    singersFile.close();
    hitsFile.close();
    salesFile.close();
}

void PrintArraysForward(Singer singersArr[], int size) {
    cout << "Name\t\tHit Count" << setw(15) << "Sales" << endl; // Header
    // Print each singer's information on a separate line in the current order of the array
    for (int i = 0; i < size; i++) {
        cout << singersArr[i].name << "\t\t" << singersArr[i].hits << "\t\t" << setw(15) << right << setprecision(2) << fixed <<
            singersArr[i].sales << endl;
    }
}

void PrintArraysBackward(Singer singersArr[], int size) {
    cout << "Name\t\tHit Count" << setw(15) << "Sales" << endl; // Header
    // Print each singer's information on a separate line in the current backwards order of the array
    for (int i = size - 1; i >= 0; i--) {
        cout << singersArr[i].name << "\t\t" << singersArr[i].hits << "\t\t" << setw(15) << right << setprecision(2) << fixed <<
            singersArr[i].sales << endl;
    }
}

void SortArrays(Singer singersArr[], int size) {
    // Variable declarations
    int index = 0;
    string singersTemp = "?"; // temporarily stores a string while swapping, for singersArray
    int hitsTemp = 0; // temporarily stores an int while swapping, for hitsArray
    double salesTemp = 0.0; // temporarily stores a double while swapping, for salesArray

    // Selection sort
    for (int i = 0; i < size; i++) {
        index = i;
        for (int j = i + 1; j < size; j++) {
            if (singersArr[j].hits > singersArr[index].hits) {
                index = j;
            }
        }

        // Switch elements in each of the arrays
        singersTemp = singersArr[i].name;
        singersArr[i].name = singersArr[index].name;
        singersArr[index].name = singersTemp;

        hitsTemp = singersArr[i].hits;
        singersArr[i].hits = singersArr[index].hits;
        singersArr[index].hits = hitsTemp;

        salesTemp = singersArr[i].sales;
        singersArr[i].sales = singersArr[index].sales;
        singersArr[index].sales = salesTemp;
    }
}