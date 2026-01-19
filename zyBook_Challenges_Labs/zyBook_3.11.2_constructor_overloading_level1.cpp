//************************************
// Name: Devin Kennedy
// Date: 2/5/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_3.11.2_constructor_overloading_level1.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * The Member class has a default constructor, a constructor with one parameter,
 * and a constructor with three parameters. Declare the following objects:
 * member1 with no arguments
 * member2 with memberName as an argument
 * member3 with memberName, memberAge, and memberHeight as arguments
 *
 * Ex: If the input is Fay 28 4.50, then the output is:
 * Member: Unknown, 0, 0.00
 * Member: Fay, 0, 0.00
 * Member: Fay, 28, 4.50
 */
//************************************

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Member {
   public:
      Member();
      Member(string memberName);
      Member(string memberName, int memberAge, double memberHeight);
      void Print();
   
   private:
      string name;
      int age;
      double height;
};

// Default constructor
Member::Member() {
   name = "Unknown";
   age = 0;
   height = 0.0;
}

Member::Member(string memberName) {  
   name = memberName;
   age = 0;
   height = 0.0;
}

Member::Member(string memberName, int memberAge, double memberHeight) {  
   name = memberName;
   age = memberAge;
   height = memberHeight;
}

void Member::Print() {
   cout << fixed << setprecision(2) << "Member: " << name << ", " << age << ", " << height << endl;
}

int main() {
   string memberName;
   int memberAge;
   double memberHeight;
   
   cin >> memberName;
   cin >> memberAge;
   cin >> memberHeight;

   // Modified portion of code
   Member member1;
   Member member2(memberName);
   Member member3(memberName, memberAge, memberHeight);
   // End modified portion of code

   member1.Print();
   member2.Print();
   member3.Print();
   
   return 0;
}