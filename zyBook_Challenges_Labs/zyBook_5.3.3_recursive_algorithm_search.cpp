//************************************
// Name: Devin Kennedy
// Date: 4/19/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_5.3.3_recursive_algorithm_search.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * String targetItem and integer numData are read from input. Then, numData
 * alphabetically-sorted strings are read from input and each string is appended
 * to a vector. FindMatch() is a recursive search function that finds the index
 * of a target string within a vector. Complete the FindMatch() function:
 * 
 * If targetItem < middleValue evaluates to true, then recursively call
 * FindMatch() to find targetItem in the range from lowerIndex to middleIndex.
 * 
 * Otherwise, recursively call FindMatch() to find targetItem in the range from
 * middleIndex + 1 to upperIndex.
 */
//************************************

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void FindMatch(vector<string> itemList, string targetItem, int lowerIndex, int upperIndex) {
   int middleIndex;
   int rangeSize;
   string middleValue;

   cout << "Searching range from index " << lowerIndex << " to " << upperIndex << endl;

   rangeSize = (upperIndex - lowerIndex) + 1;
   middleIndex = (lowerIndex + upperIndex) / 2;
   middleValue = itemList.at(middleIndex);

   if (targetItem == middleValue) {
      cout << targetItem << " is found at index " << middleIndex << endl;
   }
   else if (rangeSize == 1) {
      cout << targetItem << " is not in the list" << endl;
   }
   else {

      if (targetItem < middleValue) {

         // Modified portion of code
         FindMatch(itemList, targetItem, lowerIndex, middleIndex);
         // End modified portion of code

      }
      else {

         // Modified portion of code
         FindMatch(itemList, targetItem, middleIndex + 1, upperIndex);
         // End modified portion of code

      }

   }
}

int main() {
   string targetItem;
   vector<string> dataList;
   int numData;
   int i;
   string item;

   cin >> targetItem;
   cin >> numData;
   for (i = 0; i < numData; ++i) {
      cin >> item;
      dataList.push_back(item);
   }

   FindMatch(dataList, targetItem, 0, dataList.size() - 1);

   return 0;
}