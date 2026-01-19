//************************************
// Name: Devin Kennedy
// Date: 3/12/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_4.9.1_destructors_level1.cpp
//************************************

//************************************
// zyBook Challenge: 
/* The GourdsOrder class has a data member, called barrels, that is a
 * dynamically allocated array of Barrel objects. Each Barrel object has data
 * members, number and weight, representing the barrel number and the total
 * weight of an order of gourds. Complete the declaration of the GourdsOrder
 * class destructor.
 */
//************************************

#include <iostream>
#include <iomanip>
using namespace std;

class Barrel {
   public:
      Barrel();
      ~Barrel();
      void Set(int orderNumber, double totalWeight);
      void Print();
   private:
      int number;
      double weight;
};

Barrel::Barrel() {
   number = 0;
   weight = 0.0;
}

Barrel::~Barrel() {
   cout << "Destructor called on Barrel (" << number << ", " << fixed << setprecision(1) << weight << ")" << endl;
}

void Barrel::Set(int orderNumber, double totalWeight) {
   number = orderNumber;
   weight = totalWeight;
}

void Barrel::Print() {
	cout << "Barrel #" << number << ": ";
	cout << fixed << setprecision(1) << weight << " pounds of gourds" << endl;
}

class GourdsOrder {
   public:
      GourdsOrder();

      // Modified portion of code
      ~GourdsOrder();
      // End modified portion of code

      void SetSize(int numBarrelsVal);
      void Reserve(int index, int orderNumber, double totalWeight);
      void Print();
   private:
      int numBarrels;
      Barrel* barrels;
};

GourdsOrder::GourdsOrder() {
   numBarrels = 0;
   barrels = nullptr;
}

GourdsOrder::~GourdsOrder() {
   cout << "Testing GourdsOrder destructor" << endl;
   delete[] barrels;
}

void GourdsOrder::SetSize(int numBarrelsVal) {
   numBarrels = numBarrelsVal;
   if (numBarrelsVal > 0) {
      barrels = new Barrel[numBarrelsVal];
   }
}

void GourdsOrder::Reserve(int index, int orderNumber, double totalWeight) {
   barrels[index].Set(orderNumber, totalWeight);
}

void GourdsOrder::Print() {
   int i;

   for (i = 0; i < numBarrels; ++i) {
      barrels[i].Print();
   }
}

void RunGourdsOrder(int numBarrelsVal) {
   GourdsOrder gourdsOrder;
   int orderNumber;
   double totalWeight;
   int i;
   
   gourdsOrder.SetSize(numBarrelsVal);
   for (i = 0; i < numBarrelsVal; ++i) {
      cin >> orderNumber;
      cin >> totalWeight;
      gourdsOrder.Reserve(i, orderNumber, totalWeight);
   }
   gourdsOrder.Print();
}

int main() {
   int numBarrelsVal;

   cin >> numBarrelsVal;

   RunGourdsOrder(numBarrelsVal);

   return 0;
}