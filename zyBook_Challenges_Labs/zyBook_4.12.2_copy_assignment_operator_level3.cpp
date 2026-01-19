//************************************
// Name: Devin Kennedy
// Date: 3/21/2025
// Course: CS255-01 - Computer Science II
// File name: zyBooks_4.12.2_copy_assignment_operator_level3.cpp
//************************************

//************************************
// zyBook Challenge: 
/* Complete the copy assignment operator to copy the data to the new pointer.
 *
 * Ex: If the input is 288, then the output is:
 *
 * flight1: 363 passengers
 * copyFlight1: 288 passengers
 * Destructor called
 * Destructor called
 */
//************************************

#include <iostream>
using namespace std;

class Flight {
   public:
      Flight();
      ~Flight();
      void setNumPassengers(int newNumPassengers);
      void Print() const;
      Flight& operator=(const Flight& flightToCopy);
   private:
      int* numPassengers;
};

Flight::Flight() {
   numPassengers = new int;
	*numPassengers = 0;
}

Flight::~Flight() {
   cout << "Destructor called" << endl;
   delete numPassengers;
}

// Modified portion of code
Flight& Flight::operator=(const Flight& flightToCopy) {
   if (this != &flightToCopy) {
      delete numPassengers;
      numPassengers = new int;
      *numPassengers = *(flightToCopy.numPassengers);
   }
   
   return *this;
}
// End modified portion of code

void Flight::setNumPassengers(int newNumPassengers) {
	*numPassengers = newNumPassengers;
}

void Flight::Print() const {
   cout << *numPassengers << " passengers" << endl;
}

int main(){
   int numPassengers;
   Flight flight1;
   Flight copyFlight1;
   
   cin >> numPassengers;
   
   flight1.setNumPassengers(numPassengers);
   copyFlight1 = flight1;
   flight1.setNumPassengers(363);
   
   cout << "flight1: ";
   flight1.Print();
   cout << "copyFlight1: ";
   copyFlight1.Print();
   
   return 0;
}