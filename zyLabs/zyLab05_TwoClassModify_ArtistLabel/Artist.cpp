//************************************
// Name: Devin Kennedy
// Date: 2/20/2025
// Course: CS255-01 - Computer Science II
// Description: Class definitions for Artist class
// File name: Artist.cpp
//************************************
#include "Artist.h"
#include <iostream>
#include <string>
using namespace std;

// Default constructor
Artist::Artist() {
	name = "unknown";
	birth = -1;
	death = -1;
}

// Constructor that initializes to user-set values
Artist::Artist(string artistName, int birthYear, int deathYear) {
	name = artistName;
	birth = birthYear;
	death = deathYear;
}

// Get functions
string Artist::GetName() const {
	return name;
}
int Artist::GetBirthYear() const {
	return birth;
}
int Artist::GetDeathYear() const {
	return death;
}

// Print out information about Artists and their work
void Artist::PrintInfo() const {
	cout << "Artist: " << GetName() << " (";
	if (birth < 0) // Was a birth year entered?
		cout << "unknown)" << endl;
	else if (death < 0) // Was a death year entered?
		cout << GetBirthYear() << " to present)" << endl;
	else
		cout << GetBirthYear() << " to " << GetDeathYear() << ")" << endl;
}