//************************************
// Name: Devin Kennedy
// Date: 
// Course: CS255-01 - Computer Science II
// File name: 
//************************************

//************************************
// zyBook Challenge: 
/*
 * Integer numVals is read from input, representing the number of remaining
 * values in the input. Then, numVals integers are read from input and stored
 * into the array numArray. Write a function PrintNumEvens() that has two
 * parameters: a constant integer array and an integer representing the number
 * of elements in the array. PrintNumEvens() outputs the number of even
 * elements.
 *
 * Ex: If the input is:
 * 6
 * 61 20 55 17 54 73
 *
 * then the output is:
 * 2
 */
 //************************************

#include <iostream>
using namespace std;

void PrintNumEvens(const int arrayInput[], int elements) {
   // Modified portion of code
   int countEvens = 0;
   for (int i=0; i<elements; i++) {
      if (arrayInput[i] % 2 == 0)
         countEvens++;
   }
   
   cout << countEvens;
   // End modified portion of code
}

int main() {
   const int MAX_SIZE = 20;
   int numArray[MAX_SIZE]; // allow at most 20 elements
   int i;
   int numVals;
   
   cin >> numVals;
   
   for (i = 0; i < numVals; ++i) {
      cin >> numArray[i];
   }
   
   PrintNumEvens(numArray, numVals);
   
   cout << endl;
      
   return 0;
}