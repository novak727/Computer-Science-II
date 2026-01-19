//************************************
// Name: Devin Kennedy
// Date: 2/20/2025
// Course: CS255-01 - Computer Science II
// Description: Class definitions for Artwork class
// File name: Artwork.cpp
//************************************
#include "Artwork.h"
#include <iostream>

// Default constructor
Artwork::Artwork() {
	workTitle = "unknown";
	year = -1;
}

// Constructor, initializes private fields
Artwork::Artwork(string title, int yearCreated, Artist artist) {
	workTitle = title;
	year = yearCreated;
	artistInfo = artist;
}

// Get functions for title and year created
string Artwork::GetTitle() {
	return workTitle;
}
int Artwork::GetYearCreated() {
	return year;
}

// Print artwork info, using the Artist PrintInfo function to print artist information
void Artwork::PrintInfo() {
	artistInfo.PrintInfo();
	cout << "Title: " << GetTitle() << ", " << GetYearCreated() << endl;
}