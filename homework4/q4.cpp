#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int length, numEntered, seqTotal = 1;
    double geoMean;

    cout<<"Section A: "<<endl<<endl;

    cout<<"Please enter the length of the sequence: ";
    cin>>length;

    cout<<"Please enter your sequence: "<<endl;

    for(int i=0; i < length; i++){
        cin>>numEntered;
        seqTotal *= numEntered;
    }

    geoMean = pow(seqTotal, 1.0 / (double)length);

    cout<<"The geometric mean is: "<<geoMean<<endl;

    cout<<endl;
    cout<<"Section b"<<endl;

    int numEnteredB, seqTotalB = 1, counterB = 0;
    double geoMeanB;

    cout<<"Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1:"<<endl;

    while (numEnteredB != -1){
        cin >> numEnteredB;

        if(numEnteredB == -1){
            break;
        }
        seqTotalB *= numEnteredB;
        counterB++;
    }

    geoMeanB = pow(seqTotalB, 1.0 / counterB);

    cout<<"The geometric mean is: "<<geoMeanB<<endl;

    return 0;
}
