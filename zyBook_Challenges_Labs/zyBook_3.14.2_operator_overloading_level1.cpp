//************************************
// Name: Devin Kennedy
// Date: 2/5/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_3.14.2_operator_overloading_level1.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * Four doubles are read from input, where the first two doubles are the minutes
 * and seconds of time1 and the second two doubles are the minutes and seconds
 * of time2. Complete the function to overload the - operator.
 *
 * Ex: If the input is 10.0 20.8 2.0 13.4, then the output is:
 * 10 minutes, 20.8 seconds
 * 2 minutes, 13.4 seconds
 * Difference: 8 minutes, 7.4 seconds
 *
 * Note: The difference of two time values is:
 * the difference of the number of minutes
 * the difference of the number of seconds
 *
 */
//************************************

#include <iostream>
using namespace std;

class Time {
   public:
      Time(double m = 0.0, double s = 0.0);
      void Print() const;
      Time operator-(Time rhs);
   private:
      double minutes;
      double seconds;
};

Time::Time(double m, double s) {
   minutes = m;
   seconds = s;
}

// No need to accommodate for overflow or negative values
Time Time::operator-(Time rhs) {
   // Modified portion of code
   Time retval;
   
   retval.minutes = minutes - rhs.minutes;
   retval.seconds = seconds - rhs.seconds;
   
   return retval;
   // End modified portion of code
}

void Time::Print() const {
   cout << minutes << " minutes, " << seconds << " seconds";
}

int main() {
   double m1;
	double s1;
	double m2;
	double s2;
   
   cin >> m1;
	cin >> s1;
	cin >> m2;
	cin >> s2;
   
   Time time1(m1, s1);
	Time time2(m2, s2);
   
   Time difference = time1 - time2;
   
   time1.Print();
	cout << endl;
	time2.Print();
	cout << endl;
	cout << "Difference: ";
	difference.Print();
	cout << endl;
   
   return 0;
}