#include <iostream>
using namespace std;

int fib(int n);

int main() {

    int num, fibonacci;

    cout<<"Please enter a positive integer:";
    cin>>num;

    fibonacci=fib(num);
    cout<<fibonacci;

    return 0;
}

int fib(int n){

    if (n==0)
        return 0;
    else if (n<3)
        return 1;

    int i, sum, prevValue1, prevValue2;
    prevValue1=1, prevValue2=1;
    for (i = 3; i <= n; i += 1) {
        sum = prevValue1+prevValue2;
        prevValue1=prevValue2;
        prevValue2=sum;
        }
        return sum;
    }

