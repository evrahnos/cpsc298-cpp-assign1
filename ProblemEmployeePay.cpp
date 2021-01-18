#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double const PAY_RATE = 16.00;
   int hoursWorked;
   double grossPay;

   // Gets the hours worked in the week from the user.
   cout << "Input the number of hours worked in the week: ";
   cin >> hoursWorked;

   // Checks if the employee has worked any overtime hours.
   if (hoursWorked > 40) {
     grossPay = (hoursWorked - 40) * (PAY_RATE * 1.5) + (PAY_RATE * 40);
   }
   else {
     grossPay = PAY_RATE * hoursWorked;
   }

   double socialSecurityTax = 0.06 * grossPay;
   double federalIncomeTax = 0.14 * grossPay;
   double stateIncomeTax = 0.05 * grossPay;
   double const MEDICAL_INSURANCE = 10.00;
   double netPay = grossPay - socialSecurityTax - federalIncomeTax - stateIncomeTax - MEDICAL_INSURANCE;

   // Outputs gross pay, all withheld amounts (taxes, etc.), and the final take-home pay.
   cout << "Your gross pay for this week is $" << fixed << setprecision(2) << grossPay << "." << endl;
   cout << "6% of the gross pay is withheld for Social Security tax. ($" << fixed << setprecision(2) << socialSecurityTax << ")" << endl;
   cout << "14% of the gross pay is withheld for federal income tax. ($" << fixed << setprecision(2) << federalIncomeTax << ")" << endl;
   cout << "5% of the gross pay is withheld for state income tax. ($" << fixed << setprecision(2) << stateIncomeTax << ")" << endl;
   cout << "$" << MEDICAL_INSURANCE << " from the gross pay is withheld for health insurance." << endl;
   cout << "The net take-home pay results to $" << netPay << "." << endl;


   return 0;
}
