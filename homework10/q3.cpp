#include <iostream>
#include <vector>
using namespace std;

int* createSequenceArr(int& sequenceArrSize);
vector<int> createSequenceVector();
void searchNumber(int* numArr, int numArrSize, int searchNum);
void searchNumberVector(vector<int> numsVector, int searchNum);
int main1();
int main2();

int main() {

    main2();

    return 0;
}

int main1(){

    int numberToSearch;

    int sequenceArrSize;
    int* numArr = createSequenceArr(sequenceArrSize);

    cout << "Please enter a number you want to search: " << endl;
    cin >> numberToSearch;

    searchNumber(numArr, sequenceArrSize, numberToSearch);

    delete [] numArr;
    return 0;
}

int main2(){

    int numberToSearch;

    vector<int> numsVector = createSequenceVector();

    cout << "Please enter a number you want to search: " << endl;
    cin >> numberToSearch;

    searchNumberVector(numsVector, numberToSearch);

    return 0;
}

int* createSequenceArr(int& sequenceArrSize){
    int* numArr = new int[1];
    int numArrSize = 0;
    int numArrPhSize = 1;

    int currentEnteredNum;

    cout << "Please enter a sequence of positive integers, each in a separate line. End your input by typing -1." << endl;

    while(currentEnteredNum != -1){
        cin >> currentEnteredNum;
        if(numArrSize == numArrPhSize){
            int* newNumArr = new int[2*numArrPhSize];
            for(int i=0; i < numArrSize; i++){
                newNumArr[i] = numArr[i];
            }
            delete [] numArr;
            numArr = newNumArr;
            numArrPhSize *= 2;
        }
        numArr[numArrSize] = currentEnteredNum;
        numArrSize++;
    }

    sequenceArrSize = numArrSize;
    return numArr;
}

vector<int> createSequenceVector(){
    vector<int> numsVector;
    int currentEnteredNum;

    cout << "Please enter a sequence of positive integers, each in a separate line. End your input by typing -1." << endl;

    while(currentEnteredNum != -1){
        cin >> currentEnteredNum;
        numsVector.push_back(currentEnteredNum);
    }

    return numsVector;
}

void searchNumber(int* numArr, int numArrSize, int searchNum){
    cout << searchNum << " shows in line(s) ";
    for(int i = 0; i < numArrSize; i++){
        if(numArr[i] == searchNum){
            if(i == 0){
                cout << i+1;
            }else{
                cout << ", " << i+1;
            }
        }
    }
    cout << ".";
}

void searchNumberVector(vector<int> numsVector, int searchNum){
    int it = 0;
    cout << searchNum << " shows in line(s) ";
    for(int i = 0; i < numsVector.size(); i++){
        if(numsVector[i] == searchNum){
            if(i == 0){
                cout << i+1;
            }else{
                cout << ", " << i+1;
            }
        }
    }
    cout << ".";
}
