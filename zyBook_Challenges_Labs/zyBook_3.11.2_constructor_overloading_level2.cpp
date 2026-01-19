//************************************
// Name: Devin Kennedy
// Date: 2/5/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_3.11.2_constructor_overloading_level2.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * The Article class has a default constructor with no parameters. Define an
 * overloaded constructor that takes one string parameter and initializes the
 * article's title with the string.
 *
 * Ex: If the input is Morning, then the output is:
 * Article: Unnamed
 * Article: Morning
 */
//************************************

#include <iostream>
#include <string>
using namespace std;

class Article {
   public:
      Article();
      Article(string articleTitle);
      void Print();
   
   private:
      string title;
};

// Default constructor
Article::Article() {
   title = "Unnamed";
}

Article::Article(string articleTitle) {
   // Modified portion of code
   title = articleTitle;
   // End modified portion of code
}

void Article::Print() {
   cout << "Article: " << title << endl;
}

int main() {
   string articleTitle;
   
   cin >> articleTitle;
   
   Article emptyArticle;
   Article article1(articleTitle);
   
   emptyArticle.Print();
   article1.Print();

   return 0;
}