#include <iostream>
using namespace std;

int main() {
   double const METRIC_TON = 35273.92;
   double weightOunces;
   double weightTons;
   double numBoxes;

   cout << "Input the weight of the package in ounces: ";
   cin >> weightOunces;

   weightTons = weightOunces / METRIC_TON;
   cout << "The weight of the cereal in metric tons is " << weightTons << "." << endl;

   numBoxes = METRIC_TON / weightOunces;
   cout << "The number of boxes that will hold a metric ton of cereal is " << numBoxes << "." << endl;


   return 0;
}
