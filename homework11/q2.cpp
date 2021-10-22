#include <iostream>
#include <cmath>
using namespace std;

int sumOfSquares(int arr[], int arrSize);
bool isSorted(int arr[], int arrSize);
int const ARRSIZE=4;
int main() {
    int sum;
    bool sorted;

    int arr[] = {2, -1, 3, 10};

    sum=sumOfSquares(arr, ARRSIZE);
    cout<<"The sum of the squares is "<<sum<<endl;

    sorted = isSorted(arr, ARRSIZE);
    if(sorted)
        cout<<"Array is sorted"<<endl;
    else
        cout<<"Array is not sorted"<<endl;

    return 0;
}

int sumOfSquares(int arr[], int ARRSIZE){
    int sum=0;

    if(ARRSIZE==1)
        sum=pow(arr[0], 2);
    else{
        sumOfSquares(arr, ARRSIZE-1);
        for(int i=0; i<ARRSIZE; i++)
            sum+=pow(arr[i], 2);
    }
    return sum;
}

bool isSorted(int arr[], int ARRSIZE){
    if(ARRSIZE==0 || ARRSIZE==1)
        return true;
    else{
        if(arr[ARRSIZE-1] < arr[ARRSIZE-2])
            return false;
        else
            return isSorted(arr, ARRSIZE-1);
    }

}
