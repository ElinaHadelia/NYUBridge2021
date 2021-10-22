#include <iostream>
using namespace std;

int minInArray(int arr[], int arrSize);
void minIndex(int arr[],int num);
int const NUMBER_OF_VALUES = 20;
int main() {
    int arrayValue[NUMBER_OF_VALUES];
    int i;

    cout<<"Please enter 20 integers separated by a space: "<<endl;
    for(i = 0; i < NUMBER_OF_VALUES; i += 1)
        cin>>arrayValue[i];

    minIndex(arrayValue, NUMBER_OF_VALUES);

    return 0;
}

int minInArray(int arr[], int arrSize){
    int i;
    int minimum=999999999;
    for(i = 0; i < NUMBER_OF_VALUES; i += 1) {
        if (arr[i] < minimum)
            minimum=arr[i];
    }
    return minimum;
}

void minIndex(int arr[],int num){
    int minimum, i;
    minimum=minInArray(arr, NUMBER_OF_VALUES);

    cout<<"The minimum value is "<<minimum<<", and its located in the";
    cout<<" following indices: ";

    for(i = 0; i < NUMBER_OF_VALUES; i += 1)
        if (arr[i]==minimum)
            cout<<i<<" ";

cout<<endl;
}

