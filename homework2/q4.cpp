#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    int sum, difference, multiplied, divValue, mod;
    float divided;

    cout<<"Please enter two positive integers, separated by a space: "<<endl;
    cin>>number1>>number2;

    sum= number1+number2;
    difference= number1-number2;
    multiplied = number1*number2;
    divided = float (number1) / number2;
    divValue= number1 / number2;
    mod= number1 % number2;

    cout<<number1<<" + "<<number2<<" = "<<sum<<endl;
    cout<<number1<<" - "<<number2<<" = "<<difference<<endl;
    cout<<number1<<" * "<<number2<<" = "<<multiplied<<endl;
    cout<<number1<<" / "<<number2<<" = "<<divided<<endl;
    cout<<number1<<" div "<<number2<<" = "<<divValue<<endl;
    cout<<number1<<" mod "<<number2<<" = "<<mod<<endl;

    return 0;
}
