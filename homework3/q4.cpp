#include <iostream>
using namespace std;

const int FLOOR_ROUND = 1, CEILING_ROUND = 2, ROUND = 3;
int main() {

double realNum, roundNum;
int choice, floorNum, ceilingNum;

    cout<<"Please enter a Real number: "<<endl;
    cin>>realNum;

    cout<<"Choose your rounding method: "<<endl;
    cout<<"1. Floor round"<<endl;
    cout<<"2. Ceiling round"<<endl;
    cout<<"3. Round to the nearest whole number"<<endl;
    cin>>choice;

    if (choice==1 || choice==2 || choice==3){
    switch (choice)
    {
        case FLOOR_ROUND:
            floorNum=realNum;
            cout<<floorNum<<endl;
            break;
        case CEILING_ROUND:
            ceilingNum=realNum+1;
            cout<<ceilingNum<<endl;
            break;
        case ROUND:
            floorNum=realNum;
            ceilingNum=realNum+1;
            roundNum=realNum-floorNum;
            if (roundNum <0.5)
                cout<<floorNum<<endl;
            else
                cout<<ceilingNum<<endl;
            break;
        default:
            cout<<realNum;
            break;
    }}
    else
        cout<<"Invalid choice. Choose either 1, 2, or 3."<<endl;

    return 0;
}
