#include <iostream>
using namespace std;

int* getPosNums1(int* arr, int arrSize, int& outPosArrSize);
void getPosNums2(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize);
int* getPosNums3(int* arr, int arrSize, int* outPosArrSizePtr);
void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr);
void printArrayValue(int* arr,int arrSize);
int main() {

    int arr[] = {3, -1, -3, 0, 6, 4};
    int arrSize = 6;
    int outPosArrSize;
    int* outPosArr;

    cout<<"Version a:\n";
    outPosArr = getPosNums1(arr, arrSize, outPosArrSize);
    printArrayValue(outPosArr, outPosArrSize);

    cout<<"Version b:\n";
    getPosNums2(arr, arrSize, outPosArr, outPosArrSize);
    printArrayValue(outPosArr, outPosArrSize);

    cout<<"Version c:\n";
    outPosArr = getPosNums3(arr, arrSize, &outPosArrSize);
    printArrayValue(outPosArr, outPosArrSize);

    cout<<"Version d:\n";
    getPosNums4(arr, arrSize, &outPosArr, &outPosArrSize);
    printArrayValue(outPosArr, outPosArrSize);

    return 0;
}

int* getPosNums1(int* arr, int arrSize, int& outPosArrSize) {
    outPosArrSize = 0;

    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            outPosArrSize++;
        }
    }

    int* outPosArr = new int[outPosArrSize];
    int i, j = 0;

    for (i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            outPosArr[j++] = arr[i];
        }
    }
    delete [] outPosArr;
    return outPosArr;
}

void getPosNums2(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize) {
    outPosArrSize = 0;

    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            outPosArrSize++;
        }
    }

    outPosArr = new int[outPosArrSize];
    int i, j = 0;

    for (i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            outPosArr[j++] = arr[i];
        }
    }
    delete [] outPosArr;
}

int* getPosNums3(int* arr, int arrSize, int* outPosArrSizePtr) {

    *outPosArrSizePtr = 0;

    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            (*outPosArrSizePtr)++;
        }
    }

    int* outPosArr = new int[(*outPosArrSizePtr)];
    int i, j = 0;

    for (i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            outPosArr[j++] = arr[i];
        }
    }
    delete [] outPosArr;
    return outPosArr;
}

void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr) {
    *outPosArrSizePtr = 0;

    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            (*outPosArrSizePtr)++;
        }
    }

    (*outPosArrPtr) = new int[(*outPosArrSizePtr)];
    int i, j = 0;

    for (i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            (*outPosArrPtr)[j++] = arr[i];
        }
    }
    delete [] *outPosArrPtr;
}

void printArrayValue(int* arr,int arrSize) {

    cout << "New positive nums array: ";

    for (int i = 0; i < arrSize; i++)
        cout << arr[i] << " ";

    cout << endl << endl;
}
