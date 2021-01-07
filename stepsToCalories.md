#include <iostream>
using namespace std;

// Function converts steps to feet walked
int StepsToFeet(int baseSteps) {
   const int FEET_PER_STEP = 3;  // Unit conversion
   int feetTot = 0;              // Corresponding feet to steps
   
   feetTot = baseSteps * FEET_PER_STEP;
   
   return feetTot;
}

// Function converts steps to calories burned
double StepsToCalories(int baseSteps) {
   const double STEPS_PER_MINUTE = 70.0;            // Unit conversion
   const double CALORIES_PER_MINUTE_WALKING = 3.5;  // Unit conversion
   double minutesTot  = 0.0;                        // Corresponding min to steps
   double caloriesTot = 0.0;                        // Corresponding calories to min
   
   minutesTot = baseSteps / STEPS_PER_MINUTE;
   caloriesTot = minutesTot * CALORIES_PER_MINUTE_WALKING;
   
   return caloriesTot;
}

int main() {
   int stepsInput = 0;        // User defined steps
   int feetTot  = 0;          // Corresponding feet to steps
   double caloriesTot = 0.0;  // Corresponding calories to steps
   
   // Prompt user for input
   cout << "Enter number of steps walked: ";
   cin >> stepsInput;
   
   // Call functions to convert steps to feet/calories
   feetTot = StepsToFeet(stepsInput);
   cout << "Feet: " << feetTot << endl;
   
   caloriesTot = StepsToCalories(stepsInput);
   cout << "Calories: " << caloriesTot << endl;
   
   return 0;
}
