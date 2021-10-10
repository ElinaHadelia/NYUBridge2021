#include <iostream>
using namespace std;

int main() {
    int n, lineCount, spaceCount, starCount;

    cout<<"Please enter a positive integer."<<endl;
    cin>>n;

    for(lineCount=1; lineCount <= n; lineCount+= 1){
        for (spaceCount=1; spaceCount<= lineCount; spaceCount += 1) {
            cout << " ";
        }
        for(starCount=0; starCount<= (2*n) - (2*lineCount); starCount +=1) {
            cout << "*";
        }
        cout<<endl;
    }

    for(lineCount=1; lineCount <= n; lineCount+= 1){
        for (spaceCount=0; spaceCount<= n-lineCount; spaceCount += 1) {
            cout << " ";
        }
        for(starCount=1; starCount<= (2*lineCount)-1; starCount +=1) {
            cout << "*";
        }
        cout<<endl;
    }

    return 0;
}
