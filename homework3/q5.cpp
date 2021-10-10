#include <iostream>
using namespace std;

const double PDINKILO=0.453592, ININMETER=0.0254;
int main() {
double weightPds, heightIn, BMI, weightKilo, heightCm;

    cout<<"Please enter weight (in pounds): ";
    cin>>weightPds;

    cout<<"Please enter height (in inches): ";
    cin>>heightIn;

    weightKilo=weightPds*PDINKILO;
    heightCm=heightIn*ININMETER;
    BMI=weightKilo/(heightCm*heightCm);

    if (BMI<18.5)
        cout<<"The weight status is: Underweight";
    else if ((BMI>= 18.5) && (BMI<25))
        cout<<"The weight status is: Normal";
    else if ((BMI>= 25) && (BMI<30))
        cout<<"The weight status is: Overweight";
    else
        cout<<"The weight status is: Obese";
    return 0;
}
