#include <iostream>
# include <cmath>
using namespace std;

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs);
bool isPerfect(int num);
void isAmicable(int num);
int main() {
    int num, sum;

    cout << "Please enter a positive integer M(>=2): ";
    cout << endl;
    cin >> num;

    cout<<"The perfect number(s) between 2 and "<<num<<" is/are:"<<endl;
    for (int j = 2; j <=num ; j+=1) {
        if (isPerfect(j) == true) {
            cout << j << "\t";
        }
    }

    cout<<endl<<endl;

    cout<<"The amicable pair(s) between 2 and "<<num<<" is/are:"<<endl;
    isAmicable(num);

return 0;
}

    void analyzeDividors(int num, int& outCountDivs, int& outSumDivs){
    int sumDivs=0, countDivs=0;

            for (int i = 1; i < sqrt(num); i += 1) {
                if (num % i == 0){
                    sumDivs += i;
                    countDivs += 1;}
            }
            for (int i = (num / 2); i >= sqrt(num); i -= 1) {
                if (num % i == 0){
                    sumDivs += i;
                    countDivs += 1;}
            }

    outSumDivs=sumDivs;
    outCountDivs=countDivs;
}

    bool isPerfect(int num){
    int countDivs=0, sumDivs=0;
     analyzeDividors(num, countDivs, sumDivs);
        if (num==sumDivs)
            return true;
        else
            return false;
}

void isAmicable(int num){
    int countDivs=0, sumDivs=0;

    for (int j = 2; j <=num ; j+=1) {
        analyzeDividors(num, countDivs, sumDivs);
        if (sumDivs==j-1)
            cout<<sumDivs<<" and "<<j<<".";
        cout<<endl;
    }

}
