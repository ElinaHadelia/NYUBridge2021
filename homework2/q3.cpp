#include <iostream>
using namespace std;

const int MINUTESINHOUR=60, HOURSINDAY=24;
int main() {
    int daysJohn, hoursJohn, minutesJohn, daysBill, hoursBill, minutesBill;
    int totalMinutes, minutesInHours, totalHours, hoursInDays, totalDays;

    cout<<"Please enter the number of days John has worked: ";
    cin>>daysJohn;
    cout<<"Please enter the number of hours John has worked: ";
    cin>>hoursJohn;
    cout<<"Please enter the number of minutes John has worked: ";
    cin>>minutesJohn;
    cout<<endl;
    cout<<"Please enter the number of days Bill has worked: ";
    cin>>daysBill;
    cout<<"Please enter the number of hours Bill has worked: ";
    cin>>hoursBill;
    cout<<"Please enter the number of minutes Bill has worked: ";
    cin>>minutesBill;
    cout<<endl;

    totalMinutes=(minutesJohn+minutesBill) % MINUTESINHOUR;
    minutesInHours=(minutesJohn+minutesBill) / MINUTESINHOUR;
    totalHours=(hoursJohn+hoursBill+minutesInHours) % HOURSINDAY;
    hoursInDays= (hoursJohn+hoursBill+minutesInHours) / HOURSINDAY;
    totalDays=daysJohn+daysBill+hoursInDays;

    cout<<"The total time both of them worked together is: "<<totalDays<<" days, "<<totalHours;
    cout<<" hours and "<<totalMinutes<<" minutes."<<endl;

    return 0;
}
