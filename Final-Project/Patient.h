//************************************
// Name: Devin Kennedy
// Date: 4/30/2025
// Course: CS255-01 - Computer Science II
// Description: Header for class that handles all routines involving Patient data
// File name: Patient.h
//************************************
#ifndef _PATIENT_H
#define _PATIENT_H

#include "BST.h"
#include <fstream>

//************************************
// const DECLARATIONS
//************************************
const int MAX = 1000;

//************************************
// CLASS DECLARATIONS
//************************************
class Patient {
	BST IDNum;
	string lastName[MAX];
	string firstName[MAX];
	LL hgbLevel[MAX];

	bool fileOpened;
	int numPatients;
	ifstream inFile;

	void PrintIndividualProfile(const int& index) const;
public:
	Patient();
	void LoadFile();
	void PrintAllPatientsInOrder();
	void PrintPatientSearchByID(const int& id) const;
	void PrintPatientSearchLastName(const string& name) const;
	void PrintAllPatientsHGBBelowLevel(const double& hgb) const;
	void PrintAllPatients() const;
	void EnterHGBForPatient(const int& id, const double& hgb);
	void CloseFile();

	bool Loaded() const;
};

#endif