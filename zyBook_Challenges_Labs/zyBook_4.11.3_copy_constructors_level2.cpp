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
 * doubles are read from input to initialize mySavingsAccount. Write a copy
 * constructor for SavingsAccount that creates a deep copy of mySavingsAccount.
 * At the end of the copy constructor, output "Produced a new SavingsAccount
 * object" and end with a newline.
 *
 * Ex: If the input is 96.00 2.00, then the output is:
 *
 * Produced a new SavingsAccount object
 * Initial amount saved: $96.00 with 3.00 interest rate
 * Produced a new SavingsAccount object
 * After 1 month(s): $384.00
 * After 2 month(s): $1536.00
 * After 3 month(s): $6144.00
 *
 * Custom value interest rate
 * $96.00 with 2.00 interest rate
 */
//************************************

#include <iostream>
#include <iomanip>
using namespace std;

class SavingsAccount {
   public:
      SavingsAccount(double startingAmount = 0.0, double startingInterest = 0.0);
      SavingsAccount(const SavingsAccount& acc);
      void SetAmount(double newAmount);
      void SetInterest(double newInterest);
      double GetAmount() const;
      double GetInterest() const;
      void Print() const;
   private:
      double* amount;
      double* interest;
};

SavingsAccount::SavingsAccount(double startingAmount, double startingInterest) {
   amount = new double(startingAmount);
   interest = new double(startingInterest);
}

SavingsAccount::SavingsAccount(const SavingsAccount& acc) {
   // Modified portion of code
   
   // Copy value from original account's amount
   amount = new double;
   *amount = *(acc.amount);
   
   // Copy value from original account's interest
   interest = new double;
   *interest = *(acc.interest);
   
   cout << "Produced a new SavingsAccount object" << endl;
   // End modified portion of code
}

void SavingsAccount::SetAmount(double newAmount) {
   *amount = newAmount;
}

void SavingsAccount::SetInterest(double newInterest) {
   *interest = newInterest;
}

double SavingsAccount::GetAmount() const {
   return *amount;
}

double SavingsAccount::GetInterest() const {
   return *interest;
}

void SavingsAccount::Print() const {
   cout << fixed << setprecision(2) << "$" << *amount << " with " << *interest << " interest rate" << endl;
}

void SimulateGrowth(SavingsAccount c, int months) {
   for (auto i = 1; i <= months; ++i) {
      c.SetAmount(c.GetAmount() * (c.GetInterest() + 1.0));
      cout << "After " << i << " month(s): " <<  "$" << c.GetAmount() << endl;
   }
}

int main() {
   double amount;
   double interest;

   cin >> amount;
   cin >> interest;

   SavingsAccount mySavingsAccount(amount, interest);
   SavingsAccount mySavingsAccountCopy = mySavingsAccount;
   mySavingsAccount.SetInterest(interest + 1.0);
   
   cout << "Initial amount saved: ";
   mySavingsAccount.Print();
   SimulateGrowth(mySavingsAccount, 3);
   cout << endl;
   cout << "Custom value interest rate" << endl;
   mySavingsAccountCopy.Print();

   return 0;
}