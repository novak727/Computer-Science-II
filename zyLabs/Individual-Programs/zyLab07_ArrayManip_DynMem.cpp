//************************************
// Name: Devin Kennedy
// Date: 3/18/2025
// Course: CS255-01 - Computer Science II
// Description: Filter outlier data from the original array
//              and store into new array with size based on
//              size of old array without outliers
// File name: zyLab07_ArrayManip_DynMem.cpp
//************************************
#include <iostream>
using namespace std;

int main() {
    const int size = 7;
    int newSize = 0;
    int* originalValues = new int[size];
    int* filteredValues;
    int i;

    for (i = 0; i < size; ++i) {
        cin >> originalValues[i];
    }

    // Check if each array value is within data range
    // Increment newSize if is within data range
    for (i = 0; i < size; i++)
        if (originalValues[i] >= 0 && originalValues[i] <= 100)
            newSize++;

    filteredValues = new int[newSize];

    // Store values into new array
    int newIndex = 0; // index for new array
    for (i = 0; i < size; i++)
        // Filter through values again, same way as before to find newSize
        if (originalValues[i] >= 0 && originalValues[i] <= 100)
            // increment newIndex after storing value
            filteredValues[newIndex++] = originalValues[i];

    // Delete original array and assign nullptr
    delete[] originalValues;
    originalValues = nullptr;

    cout << "Old array pointer: " << originalValues << endl;

    cout << "New array: ";
    for (i = 0; i < newSize; ++i) {
        cout << filteredValues[i] << " ";
    }
    cout << endl;

    // Delete new array and assign nullptr
    delete[] filteredValues;
    filteredValues = nullptr;

    return 0;
}
