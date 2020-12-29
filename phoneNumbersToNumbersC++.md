
#include <iostream>
#include <string>
using namespace std;

int main() {
   string phoneStr;       // User input: Phone number string
   unsigned int i = 0;   // Loop index, current element in phone number string
   char currChar = '_';  // Current char in phone number string
   
   cout << "Enter phone number: " << endl;
   cin >> phoneStr;
   
   cout << "Numbers only: ";
   for (i = 0; i < phoneStr.size(); ++i) { // For each element
      currChar = phoneStr.at(i);
      if (((currChar >= '0') && (currChar <= '9')) || (currChar == '-')) {
         cout << currChar; // Print element as is
      }
      else if ( ((currChar >= 'a') && (currChar <= 'c')) ||
                ((currChar >= 'A') && (currChar <= 'C')) ) {
         cout << "2";
      }
      else if ( ((currChar >= 'd') && (currChar <= 'f')) ||
                ((currChar >= 'D') && (currChar <= 'F')) ) {
         cout << "3";
      }
      else if ( ((currChar >= 'h') && (currChar <= 'j')) ||
                ((currChar >= 'H') && (currChar <= 'J')) ) {
         cout << "4";
      }
      else if ( ((currChar >= 'k') && (currChar <= 'm')) ||
                ((currChar >= 'K') && (currChar <= 'M')) ) {
         cout << "5";
      }
      else if ( ((currChar >= 'n') && (currChar <= 'p')) ||
                ((currChar >= 'N') && (currChar <= 'P')) ) {
         cout << "6";
      }
      
      // FIXME: Add remaining else-if branches
      else {
         cout << '?';
      }
   }
   
   cout << endl;
   
   return 0;
}
