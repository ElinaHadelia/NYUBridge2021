#include <iostream>
using namespace std;

int lowestFunc(int arr[], int arrSize, int n);
int main() {
    int arr[6] = {0, 3, 80, 6, 57, 10};
    int arrSize = 6;
    int lowestCost;
    int index = 0;

    for (int i = 0; i < arrSize; i++){
        cout << arr[i] << " ";
}
    cout<<endl;

    lowestCost = lowestFunc(arr, arrSize-1, index);
    cout<<"The lowest cost is: "<<lowestCost<<endl;

    return 0;
}

int lowestFunc(int arr[], int arrSize, int n) {

    if (n==arrSize ){
        return arr[n];}
    else if (n==arrSize-1){
        return arr[0]+arr[arrSize];
    }
    else if(lowestFunc(arr, arrSize, n+1) < lowestFunc(arr, arrSize, n+2)){
        return (arr[n] + lowestFunc(arr, arrSize, n+1));
    }
    else{
        return (arr[n]+lowestFunc(arr, arrSize, n+2));
    }
}


