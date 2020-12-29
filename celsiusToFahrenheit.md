
#include <iostream>
using namespace std;

double CelsiusToFahrenheit(double tempC) {
   double tempF = tempC * 9/5 + 32;
   return tempF;
}


int main() {
   double tempF = 0.0;
   double tempC = 0.0;

   cout << "Enter temperature in Celsius: " << endl;
   cin >> tempC;

   tempF = CelsiusToFahrenheit(tempC);

   cout << "Fahrenheit: " << tempF; 

   return 0;
}

