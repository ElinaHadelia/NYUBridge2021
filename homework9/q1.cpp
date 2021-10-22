#include <iostream>
using namespace std;

const int ALPHABET_SIZE = 26;
int main(){
    string line;

    cout << "Please enter a line of text: \n";
    getline(cin, line);

    int letterArr[26] = {0};
    int wordCount = 0;

    for(int i = 0; i < line.size(); i++) {
        if ( ((line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= 'a' && line[i] <= 'z'))
             && (line[i + 1] == ' ' || line[i + 1] == ',' || line[i + 1] == '.'))
            wordCount++;
        if (line[i] >= 'A' && line[i] <= 'Z')
            letterArr[line[i] - 'A']++;
        if (line[i] >= 'a' && line[i] <= 'z')
            letterArr[line[i] - 'a']++;
    }

    cout<<wordCount<<"\twords"<<endl;

    for (int i = 0; i < ALPHABET_SIZE; i++){
        if(letterArr[i] > 0)
            cout<<letterArr[i]<<"\t"<<(char)('a' + i)<<endl;
    }

    return 0;
}
