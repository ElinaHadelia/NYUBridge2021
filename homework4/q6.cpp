#include <iostream>

using namespace std;

int main() {

    int numEntered;

    cout << "Please enter a positive integer: ";
    cin >> numEntered;

    for(int i = 1; i < numEntered; i++){

        int evenCounter = 0, numDigits = 0;
        int num = i, currDigit = 0;

        while (num > 0){
            currDigit = num % 10;

            if(currDigit % 2 == 0 ){
                evenCounter++;
            }
            numDigits++;

            num = num / 10;
        }

        if(evenCounter > numDigits/2){
            cout << i << endl;
        }
    }

    return 0;
}
