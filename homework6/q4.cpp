#include <iostream>
#include <cmath>
using namespace std;

void printDivisors(int num);

int main() {

    int num;

    cout<<"Please enter a positive integer >=2: ";
    cin>>num;
    printDivisors(num);

    return 0;
}
void printDivisors(int num) {
    int i;

    for(i=1; i<sqrt(num); i+=1) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }

    for (i = sqrt(num); i >= 1; i-=1) {
        if (num % i == 0) {
            cout << num / i << " ";
        }
    }
}
