//************************************
// Name: Devin Kennedy
// Date: 3/18/2025
// Course: CS255-01 - Computer Science II
// Description: Take a string (char*) as a parameter to a function, and return
//              a new string (char*) with the first instance of each vowel
//              in the original string capitalized
// File name: zyLab06_cStringManip_DynMem.cpp
//************************************
#include <iostream>
#include <cstring>
using namespace std;

// Return a newly allocated copy of original
// with the first occurrence of each vowel capitalized
char* CapVowels(char* original) {
    /*
       A new string must be allocated because
       a statically declared array (char result[50]) cannot be returned.
    */

    int size = strlen(original);

    char* result = new char[size + 1]; // to include null-terminating character at the end

    // Booleans to track which letters have been capitalized already
    bool aCapital = false;
    bool eCapital = false;
    bool iCapital = false;
    bool oCapital = false;
    bool uCapital = false;

    // Check if each character is a vowel and if that vowel
    // has not been capitalized before
    for (int i = 0; i < size; i++) {
        if (original[i] == 'a' && !aCapital) {
            result[i] = 'A';
            aCapital = true;
        }
        else if (original[i] == 'e' && !eCapital) {
            result[i] = 'E';
            eCapital = true;
        }
        else if (original[i] == 'i' && !iCapital) {
            result[i] = 'I';
            iCapital = true;
        }
        else if (original[i] == 'o' && !oCapital) {
            result[i] = 'O';
            oCapital = true;
        }
        else if (original[i] == 'u' && !uCapital) {
            result[i] = 'U';
            uCapital = true;
        }
        else // character is either not a vowel or a previous capitalized vowel
            result[i] = original[i];
    }

    result[size] = '\0'; // append null-terminating character

    return result;
}

int main() {

    char userCaption[50];
    char* resultStr;
    cin >> userCaption;

    resultStr = CapVowels(userCaption);

    printf("Original: %s\n", userCaption);
    printf("Modified: %s\n", resultStr);

    // Always free dynamically allocated memory when no longer needed
    delete(resultStr);

    return 0;
}
