#include <iostream>
using namespace std;

int main() {

    int enteredInt, n, lineNum;

    cout<<"Please enter a positive integer: "<<endl;
    cin>>enteredInt;

    for (lineNum = 1; lineNum <= enteredInt; lineNum += 1) {
        for (n = 1; n <= enteredInt; n++) {
            cout << lineNum * n << "\t";
        }
        cout << endl;
    }


    return 0;
}
