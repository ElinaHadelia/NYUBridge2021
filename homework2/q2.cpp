#include <iostream>
using namespace std;

const int VALUEOFQUARTER=25, VALUEOFDIME=10, VALUEOFNICKEL=5;
int main() {

    int dollars, cents, totalcents, quarters, remAfterQuarters;
    int dimes, remAfterDimes, nickels, remAfterNickels, pennies;

    cout<<"Please enter your amount in the format of ";
    cout<<"dollars and cents separated by a space: \n";
    cin>>dollars>>cents;

    totalcents=(dollars*100) +cents;

    quarters=totalcents / VALUEOFQUARTER;
    remAfterQuarters= totalcents % VALUEOFQUARTER;

    dimes=remAfterQuarters/ VALUEOFDIME;
    remAfterDimes=remAfterQuarters % VALUEOFDIME;

    nickels=remAfterDimes / VALUEOFNICKEL;
    remAfterNickels=remAfterDimes % VALUEOFNICKEL;

    pennies= remAfterNickels;

    cout<<dollars<<" dollars and "<<cents<<" cents are: \n";
    cout<<quarters<<" quarters, "<<dimes<<" dimes, " <<nickels<<" nickels and "<<pennies<<" pennies\n";

    return 0;
}

