#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE_ARR = 52;
bool areSentAnag(char* sentence1, char* sentence2);
int main() {

    string firstSentEnt;
    string secondSentEnt;

    cout << "Find out if two sentences are anagrams." << endl;
    cout << "Enter the first sentence: ";
    getline(cin, firstSentEnt);
    cout << "Enter the second sentence: ";
    getline(cin, secondSentEnt);


    char * string1 = new char[firstSentEnt.length()];
    char * string2 = new char[secondSentEnt.length()];

    for(int i=0; i <= firstSentEnt.length(); i++){
        string1[i] = firstSentEnt[i];
    }

    for(int i=0; i <= secondSentEnt.length(); i++){
        string2[i] = secondSentEnt[i];
    }

    if(areSentAnag(string1, string2)){
        cout << "The two strings are anagrams.";
    }else{
        cout << "The two strings are not anagrams.";
    }

    delete [] string1;
    delete [] string2;

    return 0;
}

bool areSentAnag(char* sentence1, char* sentence2){

    int count[MAX_SIZE_ARR] = {0};
    int i;

    for( i=0; sentence1[i] && sentence2[i]; i++){
        count[sentence1[i]]++;
        count[sentence2[i]]--;
    }

    if(sentence1[i] || sentence2[i]){
        return false;
    }

    for(i=0; i < MAX_SIZE_ARR; i++){
        if(count[i])
            return false;
    }

    return true;
}
