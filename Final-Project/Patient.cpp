//************************************
// Name: Devin Kennedy
// Date: 4/30/2025
// Course: CS255-01 - Computer Science II
// Description: Class that handles all routines involving Patient data.
// File name: Patient.cpp
//************************************

#include "Patient.h"
#include "LL.h"
#include <iostream>
#include <sstream>
using namespace std;

//************************************
// Default Constructor for Patient Class
//************************************
Patient::Patient():fileOpened(false), numPatients(0) {};

//************************************
// Get a file name from user input and load the file with that name. Then read
// in the data from that file into the appropriate data structures (the BST,
// parallel arrays, and Linked List).
//************************************
void Patient::LoadFile() {
	string fileName;
	cout << "Enter the file name: ";
	cin >> fileName;

	inFile.open(fileName);
	
	// Check that the file opened (should only fail if the file doesn't exist)
	if (!inFile.is_open()) {
		cout << "Error opening file." << endl << endl;
		return; // Immediately exit out of the LoadFile routine if the file didn't open
	}

	string tempLine;

	while (getline(inFile, tempLine)) { // Will run until no lines of data

		/* This allows data stored in a string to be read into other variables, similar
		 * to how you can read data in from files using ">>". This solves an issue I was
		 * having with only the first line of data being read in. Requires <sstream> to be
		 * included.
		 * 
		 * This was something I learned how to use this semester out of class.
		 * See the folder labeled "Extra" within the Portfolio for some sample files
		 * of how this works.
		 */
		stringstream ss(tempLine);

		int tempID;

		// The data is converted into an integer when read into the tempID integer variable.
		// 
		// Each >> runs until whitespace is reached, just like cin.
		ss >> tempID >> lastName[numPatients] >> firstName[numPatients];

		// Insert each ID and the corresponding index into the BST
		IDNum.Insert(tempID, numPatients);

		double tempHGB;
		// Read in HGB values until the terminating -1 value is reached, then break
		// out of the while loop. Until then, run the InsertAtFront routine for the LL.
		while (ss >> tempHGB) {
			if (tempHGB == -1)
				break;
			hgbLevel[numPatients].InsertAtFront(tempHGB);
		}
		numPatients++; // Actual amount of data, increment at end
	}

	cout << "File opened successfully" << endl << endl;
	fileOpened = true; // Allows all other routines to run
}

//************************************
// Calls the PrintInOrder BST routine, passing in the parallel arrays as parameters
//************************************
void Patient::PrintAllPatientsInOrder() {
	IDNum.PrintInOrder(lastName, firstName, hgbLevel);
}

//************************************
// ID is passed in from user input (obtained in Driver). Run the Search routine
// to find the index that the ID is stored at. Use this information to load the
// correct Patient data.
//************************************
void Patient::PrintPatientSearchByID(const int& id) const {
	int index = IDNum.Search(id);

	if (index == -1) // Is returned by the search routine when the ID isn't found
		cout << "Patient not found" << endl << endl;
	else
		PrintIndividualProfile(index);
}

//************************************
// PrintPatientSearchLastName takes a string with the patient's last name from
// input (from the Driver) as a parameter. This routine traverses the last name
// array and compares the parameter to each last name. If a match is found, the
// "found" boolean updates to true and the patient profile is printed. At the end,
// if the boolean was never updated to true, then the name was never found, and a
// statement saying such is printed.
//************************************
void Patient::PrintPatientSearchLastName(const string& name) const {
	bool found = false;
	for (int i = 0; i < numPatients; i++) {
		if (lastName[i] == name) {
			PrintIndividualProfile(i);
			found = true;
		}
	}
	if (!found)
		cout << "Patient not found" << endl << endl;
}

//************************************
// PrintAllPatientsHGBBelowLevel uses a double from user input (passed in from
// the Driver) and uses the LL hgbBelowVal routine to return a boolean for if the
// patient has any HGB reading below the entered value. If they do, the patient
// profile is printed for that patient.
//************************************
void Patient::PrintAllPatientsHGBBelowLevel(const double& hgb) const {
	for (int i = 0; i < numPatients; i++) {
		bool found = hgbLevel[i].hgbBelowVal(hgb);
		if (found)
			PrintIndividualProfile(i);
	}
}

//************************************
// PrintAllPatients traverses through the last name and first name parallel
// arrays, printing each person in the order they were read in from the file
//************************************
void Patient::PrintAllPatients() const {
	for (int i = 0; i < numPatients; i++)
		cout << lastName[i] << ", " << firstName[i] << endl;
	cout << endl;
}

//************************************
// EnterHGBForPatient gets the ID number of the patient and the hemoglobin reading
// from user input (passed in from the Driver). The InsertAtFront routine will be
// run at the index returned from the BST Search routine, adding the value into the 
// front of the array, like when data was read in from the file.
//************************************
void Patient::EnterHGBForPatient(const int& id, const double& hgb) {
	int index = IDNum.Search(id);
	if (index == -1) // returned when the Patient ID isn't found
		cout << "Patient not found" << endl << endl;
	else {
		hgbLevel[index].InsertAtFront(hgb);
		cout << "Hemoglobin measurement added succesfully" << endl << endl;
	}
}

//************************************
// Close the file
//************************************
void Patient::CloseFile() {
	inFile.close();
}

//************************************
// Returns the fileOpened boolean. Used in Driver for testing if a routine should be run.
//************************************
bool Patient::Loaded() const {
	return fileOpened;
}

//************************************
// PrintIndividualProfile is a private routine called by other routines in this
// class when a single Patient profile needs printing. The index is passed in from
// other routines to use for pulling correct values from the parallel arrays and BST
//************************************
void Patient::PrintIndividualProfile(const int& index) const {
	cout << "ID:\t" << IDNum.GetIDUsingIndex(index) << endl;
	cout << "Last:\t" << lastName[index] << endl;
	cout << "First:\t" << firstName[index] << endl;
	hgbLevel[index].Print();
	cout << endl;
}