//************************************
// Name: Devin Kennedy
// Date: 3/21/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_4.11.3_copy_constructos_level2.cpp
//************************************

//************************************
// zyBook Challenge: 
/* SavingsAccount is a class with two double* data members pointing to the
 * amount saved and interest rate of the savings account, respectively. Two
 * doubles are read from input to initialize userAccount. Use the copy
 * constructor to create a SavingsAccount object named copyAccount that is a
 * deep copy of userAccount.
 *
 * Ex: If the input is 57.00 0.04, then the output is:
 * 
 * Original constructor called
 * Created a new SavingsAccount object
 * userAccount: $57.00 with 4.00% interest rate
 * copyAccount: $114.00 with 8.00% interest rate
 */
//************************************

#include <iostream>
#include <iomanip>
using namespace std;

class SavingsAccount {
   public:
      SavingsAccount(double startingSaved = 0.0, double startingInterestRate = 0.0);
      SavingsAccount(const SavingsAccount& acc);
      void SetSaved(double newSaved);
      void SetInterestRate(double newInterestRate);
      double GetSaved() const;
      double GetInterestRate() const;
      void Print() const;
   private:
      double* saved;
      double* interestRate;
};

SavingsAccount::SavingsAccount(double startingSaved, double startingInterestRate) {
   saved = new double(startingSaved);
   interestRate = new double(startingInterestRate);
   cout << "Original constructor called" << endl;
}

SavingsAccount::SavingsAccount(const SavingsAccount& acc) {
   saved = new double;
   *saved = *(acc.saved);
   interestRate = new double;
   *interestRate = *(acc.interestRate);
   cout << "Created a new SavingsAccount object" << endl;
}

void SavingsAccount::SetSaved(double newSaved) {
   *saved = newSaved;
}

void SavingsAccount::SetInterestRate(double newInterestRate) {
   *interestRate = newInterestRate;
}

double SavingsAccount::GetSaved() const {
   return *saved;
}

double SavingsAccount::GetInterestRate() const {
   return *interestRate;
}

void SavingsAccount::Print() const {
   cout << fixed << setprecision(2) << "$" << *saved << " with " << *interestRate * 100 << "\% interest rate" << endl;
}

int main() {
   double saved;
   double interestRate;

   cin >> saved;
   cin >> interestRate;

   SavingsAccount userAccount(saved, interestRate);
   
   // Modified portion of code
   SavingsAccount copyAccount = userAccount;
   // End modified portion of code

   copyAccount.SetSaved(copyAccount.GetSaved() * 2);
   copyAccount.SetInterestRate(copyAccount.GetInterestRate() * 2);

   cout << "userAccount: ";
   userAccount.Print();
   cout << "copyAccount: ";
   copyAccount.Print();

   return 0;
}