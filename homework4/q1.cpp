#include <iostream>
using namespace std;

int main() {
    int posInt, evenInt;

// a) while loop
    cout<<"Section a)"<<endl;

    cout << "Please enter a positive integer: ";
    cin >> posInt;

    evenInt = 2;
    while ((posInt > 0) && (evenInt <= (2 * posInt))) {
        cout << evenInt << endl;
        evenInt += 2;
    }
    cout<<endl;

// b) for loop
    cout<<"Section b)"<<endl;
    cout << "Please enter a positive integer: ";
    cin >> posInt;

    for (evenInt = 2; posInt > 0 && evenInt <= (2 * posInt); evenInt += 2) {
    cout << evenInt << endl;
}
    return 0;
}
