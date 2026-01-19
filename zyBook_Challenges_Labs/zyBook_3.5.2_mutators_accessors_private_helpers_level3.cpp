//************************************
// Name: Devin Kennedy
// Date: 2/4/2025
// Course: CS255-01 - Computer Science II
// File name: zyBook_3.5.2_mutators_accessors_private_helpers_level3.cpp
//************************************

//************************************
// zyBook Challenge: 
/*
 * The SetWeather() mutator sets data member weather to yesterdayWeather and
 * the SetTemperature() mutator sets data member temperature to
 * yesterdayTemperature. In main(), call SetWeather() and SetTemperature(),
 * passing arguments inputWeather and inputTemperature, respectively.
 *
 * Ex: If the input is:
 * overcast 51.0
 *
 * then the output is:
 * Today's weather: overcast and the temperature is 51.0 degrees Celsius
 */
//************************************

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Yesterday {
   public:
      void SetWeather(string yesterdayWeather); 
      void SetTemperature(double yesterdayTemperature);      
      string GetWeather() const;                        
      double GetTemperature() const;                        
      void Print() const;              
   private:
      string weather;
      double temperature;
};

void Yesterday::SetWeather(string yesterdayWeather) {
   weather = yesterdayWeather;
}

void Yesterday::SetTemperature(double yesterdayTemperature) {
   temperature = yesterdayTemperature;
}

string Yesterday::GetWeather() const {
   return weather;
}

double Yesterday::GetTemperature() const {
   return temperature;
}

int main() {
   Yesterday weather;
   string inputWeather;
   double inputTemperature;

   cin >> inputWeather;
   cin >> inputTemperature;
   
   // Modified portion of code
   weather.SetWeather(inputWeather);
   weather.SetTemperature(inputTemperature);
   // End modified portion of code

   cout << "Today's weather: " << weather.GetWeather();
   cout << " and the temperature is " << fixed << setprecision(1) << weather.GetTemperature() << " degrees Celsius" << endl;

   return 0;
}