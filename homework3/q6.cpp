#include <iostream>
#include <string>
using namespace std;

const int MIN_IN_HOUR = 60;
const int EIGHT_AM_IN_MIN = 480;
const int SIX_PM_IN_MIN = 1080;

int main() {
    string day;
    int lengthMin, hourStart, minStart, totalMinStart;
    double cost;

   cout<<"Please input the day of the week when the call was made using ";
   cout<<"2 characters(e.g. Mo,Tu,We,Th,Fr,Sa,Su): ";
   cin>>day;

   cout<<"Please input the hour the call started in 24-hour format";
   cout<<"(e.g. 2PM = 14): ";
   cin>>hourStart;

   cout<<"Please input the minute the call started: ";
   cin>>minStart;

   cout<<"Please input the length of the program (in minutes): ";
   cin>>lengthMin;

   totalMinStart=hourStart*MIN_IN_HOUR + minStart;

   if ((day=="Mo") || (day=="Tu") || (day=="We") || (day=="Th") || (day=="Fr"))
           {
       if (totalMinStart>=EIGHT_AM_IN_MIN && totalMinStart<=SIX_PM_IN_MIN)
           cost=(double) lengthMin*0.40;
       else
           cost=(double) lengthMin*0.25;
   }

   else if (day=="Sa"|| day=="Su")
       cost=(double) lengthMin*0.15;
   else
       cout<<"Invalid request"<<endl;

   cout<<"The cost of the call is: $"<<cost<<endl;
   return 0;
}
