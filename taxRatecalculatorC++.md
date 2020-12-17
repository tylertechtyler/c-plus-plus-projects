#include <iostream>
using namespace std;

int main() {   
   int annualSalary = 0;
   double taxRate = 0.0;
   int taxToPay = 0;

   cout << "Enter annual salary: " << endl;
   cin >> annualSalary;

   // Determine the tax rate from the annual salary

   if (annualSalary <= 20000) {
      taxRate = 0.10;
   }
   else if (annualSalary <= 50000) {
      taxRate = 0.20;
   }
   else if (annualSalary > 50000 && annualSalary <= 100000) {
      taxRate = 0.30;
   }
   else if (annualSalary > 100000) {
      taxRate = 0.40;
   }
   
   else {
      taxRate = 0.30;
   }

   taxToPay = static_cast<int>(annualSalary * taxRate);   // Truncate tax to an integer amount
   cout << "Annual Salary: " << annualSalary << endl;
   cout << "Tax rate: " << taxRate << endl;
   cout << "Tax to pay: " << taxToPay << endl;

   return 0;
}
