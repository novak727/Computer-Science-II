//************************************
// Name: Devin Kennedy
// Date: 2/21/2025
// Course: CS255-01 - Computer Science II
// Description: Class declarations for Team class
// File name: Team.h
//************************************
#ifndef TEAMH
#define TEAMH

#include <string>

using namespace std;

class Team {
private:
	// Class members
	string name;
	int wins;
	int losses;
public:
	// Mutator functions
	void SetName(string nameInput);
	void SetWins(int winsInput);
	void SetLosses(int lossesInput);
    // Accessor functions
	string GetName() const;
	int GetWins() const;
	int GetLosses() const;
	// Misc. functions
	double GetWinPercentage() const;
	void PrintStanding() const;
};

#endif