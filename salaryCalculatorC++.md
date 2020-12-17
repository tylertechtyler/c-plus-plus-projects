#include <iostream>
using namespace std;

int main() {
   int hourlyWage    = 0;
   int weeklyHours   = 0;
   int weeklySalary  = 0;
   int overtimeHours = 0;
   const int WEEKLY_LIMIT = 40;

   cout << "Enter hourly wage: " << endl;
   cin >> hourlyWage;

   
   cin >> weeklyHours;


   if (weeklyHours <= WEEKLY_LIMIT) {
      weeklySalary = weeklyHours * hourlyWage;
   }
   else {
      overtimeHours = weeklyHours - WEEKLY_LIMIT;
      weeklySalary = static_cast<int>((hourlyWage * WEEKLY_LIMIT) +
                                      (hourlyWage * overtimeHours * 1.5));
   }
   cout << "Weekly salary is: " << weeklySalary << endl;

   return 0;
}
