#include <iostream>
#include <string>

using namespace std;

int main() {

    int valueEntered, romanInNumber, timesToRepeatLetter;
    string romanNumeral, finalRomanString;

    cout << "Please enter a decimal number: "<<endl;
    cin >> valueEntered;

    cout << valueEntered<<" is ";

    while (valueEntered > 0) {

        if (valueEntered >= 1000) {
            romanInNumber = 1000;
            romanNumeral = "M";
        }
        else if (valueEntered < 1000 && valueEntered >= 500){
            romanInNumber = 500;
            romanNumeral = "D";
        }
        else if (valueEntered < 500 && valueEntered >= 100){
            romanInNumber = 100;
            romanNumeral = "C";
        }
        else if (valueEntered < 100 && valueEntered >= 50){
            romanInNumber = 50;
            romanNumeral = "L";
        }
        else if (valueEntered < 50 && valueEntered >= 10){
            romanInNumber = 10;
            romanNumeral = "X";
        }
        else if (valueEntered < 10 && valueEntered >= 5){
            romanInNumber = 5;
            romanNumeral = "V";
        }
        else {
            romanInNumber = 1;
            romanNumeral = "I";
        }

        timesToRepeatLetter = valueEntered / romanInNumber;
        valueEntered = valueEntered % romanInNumber;

        while (timesToRepeatLetter --) {
            finalRomanString = finalRomanString + romanNumeral;
        }
    }

    cout<< finalRomanString << endl;

    return 0;
}
