//************************************
// Name: Devin Kennedy
// Date: 2/21/2025
// Course: CS255-01 - Computer Science II
// Description: Class definitions for Team class
// File name: Team.cpp
//************************************
#include <iostream>
#include <iomanip> 
#include "Team.h"
using namespace std;

// Mutator functions
void Team::SetName(string nameInput) {
	name = nameInput;
}
void Team::SetWins(int winsInput) {
	wins = winsInput;
}
void Team::SetLosses(int lossesInput) {
	losses = lossesInput;
}

// Accessor functions
string Team::GetName() const {
	return name;
}
int Team::GetWins() const {
	return wins;
}
int Team::GetLosses() const {
	return losses;
}

// Calculate win percentage
double Team::GetWinPercentage() const {
	double totalGames = GetWins() + GetLosses();
	return GetWins() / totalGames;
}

// Print out win percentage and whether a team has a winning or losing average
// based on the result from GetWinPercentage().
void Team::PrintStanding() const {
	cout << "Win percentage: " << setprecision(2) << fixed << GetWinPercentage() << endl;
	if (GetWinPercentage() >= 0.5)
		cout << "Congratulations, Team " << GetName() << " has a winning average!" << endl;
	else
		cout << "Team " << GetName() << " has a losing average." << endl;
}