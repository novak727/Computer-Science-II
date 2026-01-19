//************************************
// Name: Devin Kennedy
// Date: 3/21/2025
// Course: CS255-01 - Computer Science II
// File name: zyBooks_4.12.2_copy_assignment_operator_level2.cpp
//************************************

//************************************
// zyBook Challenge: 
/* Complete the copy assignment operator to delete the old pointer member
 * balance.
 *
 * Ex: If the input is 2200.50, then the output is:
 *
 * account1: $3603.00 balance
 * copyAccount1: $2200.50 balance
 * Destructor called
 * Destructor called
 */
//************************************

#include <iostream>
#include <iomanip>
using namespace std;

class SavingsAccount {
   public:
      SavingsAccount();
      ~SavingsAccount();
      void setBalance(double newBalance);
      void Print() const;
      SavingsAccount& operator=(const SavingsAccount& accountToCopy);
   private:
      double* balance;
};

SavingsAccount::SavingsAccount() {
   balance = new double;
	*balance = 0.0;
}

SavingsAccount::~SavingsAccount() {
   cout << "Destructor called" << endl;
   delete balance;
}

SavingsAccount& SavingsAccount::operator=(const SavingsAccount& accountToCopy) {
   if (this != &accountToCopy) {
      // Modified portion of code
      delete balance;
      // End modified portion of code
      balance = new double;
      *balance = *(accountToCopy.balance);
   }
   
   return *this;
}

void SavingsAccount::setBalance(double newBalance) {
	*balance = newBalance;
}

void SavingsAccount::Print() const {
   cout << fixed << setprecision(2) << "$" << *balance << " balance" << endl;
}

int main(){
   double balance;
   SavingsAccount account1;
   SavingsAccount copyAccount1;
   
   cin >> balance;
   
   account1.setBalance(balance);
   copyAccount1 = account1;
   account1.setBalance(3603.00);
   
   cout << "account1: ";
   account1.Print();
   cout << "copyAccount1: ";
   copyAccount1.Print();
   
   return 0;
}