#include <iostream>
using namespace std;

const int VALUEOFQUARTER=25, VALUEOFDIME=10, VALUEOFNICKEL=5, VALUEOFPENNY=1;
int main() {
    int quarters, dimes, nickels, pennies, totalInCents, totalDollars, remainingCents;

    cout<<"Please enter number of coins: \n";
    cout<<"# of quarters: ";
    cin>>quarters;
    cout<<"# of dimes: ";
    cin>>dimes;
    cout<<"# of nickel: ";
    cin>>nickels;
    cout<<"# of pennies: ";
    cin>>pennies;

    totalInCents=(quarters*VALUEOFQUARTER)+(dimes*VALUEOFDIME)+(nickels*VALUEOFNICKEL)+(pennies*VALUEOFPENNY);

    totalDollars = totalInCents / 100;

    remainingCents = totalInCents % 100;

    cout<<"The total is "<<totalDollars<<" dollars and "<<remainingCents<<" cents\n";

    return 0;
}
