#include <iostream>
using namespace std;

const int BASE_10=10;
int main() {
    int enteredNum, rem, binaryNum, startingCounter;

    cout<<"Enter decimal number: "<<endl;
    cin >> enteredNum;

    cout << "The binary representation of " << enteredNum;

    binaryNum=0, startingCounter=1;
    while (enteredNum != 0) {
        rem = enteredNum % 2;
        enteredNum = enteredNum / 2;
        binaryNum = binaryNum + (rem * startingCounter);
        startingCounter= startingCounter * BASE_10;
    }

    cout<<" is "<<binaryNum<<endl;

    return 0;
}
