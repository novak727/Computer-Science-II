//************************************
// Name: Devin Kennedy
// Date: 4/30/2025
// Course: CS255-01 - Computer Science II
// Description: Driver for Patient Hemoglobin Levels project
// File name: Driver.cpp
//************************************
#include "Patient.h"

#include <iostream>

//************************************
// FUNCTION DECLARATIONS
//************************************
int Options();

//************************************
// DRIVER
//************************************
int main() {
	int choice = Options();
	Patient data;
	while (choice != 0) {
		// Load a different routine based on the value entered.
		// If none of the valid choices were made, a statement will be printed
		switch (choice) {
			case 1: // Load File
				data.LoadFile();
				break;
			case 2: // Print all Patient Profiles
				if (data.Loaded()) {
					data.PrintAllPatientsInOrder();
				}
				else
					cout << "No file opened" << endl << endl;
				break;
			case 3: // Search for Patient by ID, print profile
				if (data.Loaded()) {
					int idInput;
					cout << "Enter the patient's ID number: ";
					cin >> idInput;

					data.PrintPatientSearchByID(idInput);
				}
				else
					cout << "No file opened" << endl << endl;
				break;
			case 4: // Search for Patient by Last Name, print profile
				if (data.Loaded()) {
					string nameInput;
					cout << "Enter the patient's last name: ";
					cin >> nameInput;

					data.PrintPatientSearchLastName(nameInput);
				}
				else
					cout << "No file opened" << endl << endl;
				break;
			case 5: // Print all Patients with HGB below given measurement
				if (data.Loaded()) {
					double hgbInput;
					cout << "Enter the HGB Level to Check: ";
					cin >> hgbInput;
					data.PrintAllPatientsHGBBelowLevel(hgbInput);
				}
				else
					cout << "No file opened" << endl << endl;
				break;
			case 6: // Print all Patients
				if (data.Loaded())
					data.PrintAllPatients();
				else
					cout << "No file opened" << endl << endl;
				break;
			case 7: // Enter a hemoglobin reading for a patient
				if (data.Loaded()) {
					int idInput;
					double hgbInput;
					cout << "Enter the patient ID followed by the hemoglobin measurement: ";
					cin >> idInput >> hgbInput;

					data.EnterHGBForPatient(idInput, hgbInput);
				}
				else
					cout << "No file opened" << endl << endl;
				break;
			case 8: // Close File
				if (data.Loaded()) {
					data.CloseFile();
					cout << "File closed successfully" << endl << endl;
				}
				else
					cout << "No file opened" << endl << endl;
				break;
			case 0: // Exit program by exiting out of the while loop
				break;
			default: // Entered a number other than 1-8 or 0
				cout << "Invalid choice. Please choose again" << endl << endl;
			}
		// Re-run until 0 is entered
		choice = Options();
	}
	return 0;
}

//************************************
// Options() loads a menu of choices and prompts the user for what they want to do.
// The value is returned to the Driver, which then checks if a valid choice was made.
//************************************
int Options() {
	int choice;

	cout << "1: Load File" << endl;
	cout << "2: Print all Patient Profiles" << endl;
	cout << "3: Search for a Patient by ID to Print Individual Profile" << endl;
	cout << "4: Search for a Patient by last name to Print Individual Profile" << endl;
	cout << "5: Print all Patients who have a hemoglobin level below a given measure" << endl;
	cout << "6: Print all Patients" << endl;
	cout << "7: Enter a hemoglobin measurement for a given patient" << endl;
	cout << "8: Close File" << endl;
	cout << "0: Exit" << endl << endl;

	cout << "Enter your choice by number: ";
	cin >> choice;

	return choice;
}