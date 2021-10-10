#include <iostream>
using namespace std;

int main() {
string name;
int gradYear, currentYear;

    cout<<"Please enter your name: ";
    cin>>name;

    cout<<"Please enter your graduation year: ";
    cin>>gradYear;

    cout<<"Please enter current year: ";
    cin>>currentYear;

    if (gradYear==currentYear)
        cout<<name<<", you graduated";
    else if  (gradYear==currentYear+4)
        cout<<name<<", you are a Freshman";
    else if  (gradYear==currentYear+3)
        cout<<name<<", you are a Sophomore";
    else if  (gradYear==currentYear+2)
        cout<<name<<", you are a Junior";
    else if  (gradYear==currentYear+1)
        cout<<name<<", you are a Senior";
    else
        cout<<name<<", you are not in college";

    return 0;
}
