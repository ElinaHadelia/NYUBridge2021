#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str);
int main() {
    string str, strRev;

    cout<<"Please enter a word: ";
    cin>>str;

    isPalindrome(str);

    return 0;
}

bool isPalindrome(string str) {
    int strLength;
    bool flag;

    strLength = str.length();

    flag = false;

    for (int i = 0; i < strLength; i += 1) {
    if (str[i] == str[strLength - i - 1])
        flag = true;
    else
        flag = false;
    break;
}

    if(flag==true)
        cout<<str<<" is a palindrome"<<endl;
    else
        cout<<str<<" is not a palindrome"<<endl;

}

