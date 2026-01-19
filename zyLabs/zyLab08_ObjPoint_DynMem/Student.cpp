// Simple class to hold student information
#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

Student::Student() {
	name = "Alex";
	gpa = 1.0;
}

Student::Student(string inName, double inGpa) {
	name = inName;
	gpa = inGpa;	
}

void Student::SetName(string inName) {
	name = inName;
}

string Student::GetName() {
   return name;
}

void Student::SetGPA(double inGpa) {
	gpa = inGpa;
}

double Student::GetGPA() {
   return gpa;
}

void Student::PrintInfo() {
   cout << name << " (" << gpa << ")" << endl;
}