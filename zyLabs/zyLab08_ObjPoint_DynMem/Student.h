#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
using namespace std;

class Student {

   public:
      Student();
      Student(string inName, double inGpa);
      void SetName(string inName);
      string GetName();
      void SetGPA(double inGpa);
      double GetGPA();
      void PrintInfo();
   
   private:
      string name;
      double gpa;
};

#endif /* STUDENT_H_ */