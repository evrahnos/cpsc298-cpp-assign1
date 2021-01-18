#include <iostream>
using namespace std;

int main() {
   int maxRoomCapacity;
   int numPeopleAttending;

   cout << "Input the maximum room capacity of the meeting room: ";
   cin >> maxRoomCapacity;
   cout << "Input the amount of people attending the meeting: ";
   cin >> numPeopleAttending;

   if (numPeopleAttending <= maxRoomCapacity) {
      cout << "It is legal to hold this meeting. " << maxRoomCapacity - numPeopleAttending << " more people are able to attend." << endl;
   }
   else {
      cout << "It is not legal to hold this meeting. " << numPeopleAttending - maxRoomCapacity << " people must be excluded." << endl;
   }


   return 0;
}
