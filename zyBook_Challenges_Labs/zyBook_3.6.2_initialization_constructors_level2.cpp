//************************************
// Name: Devin Kennedy
// Date: 2/4/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_3.6.2_initialization_constructors_level2.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Define a default constructor that initializes the data members, string
 * author and integer numWords, with the default values "Void" and -1,
 * respectively.
 *
 * Ex: If the input is Gil 38000, then the output is:
 * Author: Void, Number of words: -1
 * Author: Gil, Number of words: 38000
 *
 * Note: The class's print function is called first after the default
 * constructor, then again after the inputs are passed to the setters.
 */
//************************************

#include <iostream>
#include <string>
using namespace std;

class Play {
   public:
      Play();
      void SetAuthor(string playAuthor);
      void SetNumWords(int playNumWords);
      void Print();

   private:
      string author;
      int numWords;
};

Play::Play() {
   // Modified portion of code
   author = "Void";
   numWords = -1;
   // End modified portion of code
}

void Play::SetAuthor(string playAuthor) {
   author = playAuthor;
}

void Play::SetNumWords(int playNumWords) {
   numWords = playNumWords;
}

void Play::Print() {
   cout << "Author: " << author << ", Number of words: " << numWords << endl;
}

int main() {
   string newAuthor;
   int newNumWords;
   Play play1;

   play1.Print();
   
   cin >> newAuthor;
   cin >> newNumWords;

   play1.SetAuthor(newAuthor);
   play1.SetNumWords(newNumWords);

   play1.Print();

   return 0;
}