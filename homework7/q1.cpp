#include <iostream>
using namespace std;

int printMonthCalender(int numOfDays, int startingDay);
bool determiningLeapYear(int year);
void printYearCalender(int year, int startingDay);
int main() {
    int year, startingDay;

    cout<<"Please enter a year (ex.: 2015):"<<endl;
    cin>>year;
    cout<<"Please enter the first day of January of that year ";
    cout<<"using 1 for Monday through 7 for Sunday):"<<endl;
    cin>>startingDay;
    cout<<endl;
    printYearCalender(year, startingDay);

    return 0;
}

int printMonthCalender(int numOfDays, int startingDay){
    int day, dayPrev, spaces, startingDayEl, numOfWeeks;

    cout<<"Mon\tTue\tWed\tThr\tFri\tSat\tSun"<<endl;

    if ((startingDay==6 || startingDay==7) && (numOfDays==30 || numOfDays==31))
        numOfWeeks=(numOfDays/7) +2;
    else if (startingDay==1 && numOfDays==28)
        numOfWeeks=(numOfDays/7);
    else
        numOfWeeks=(numOfDays/7) +1;

    for (int week=1; week <= numOfWeeks; week +=1){
        if(week==1){
        for (spaces=1; spaces<=startingDay-1; spaces+=1){
            cout<<"\t";}
        for (day = 1; day <= 7-startingDay +1; ++day)
                cout <<day << "\t";
        }
        else if (week == numOfWeeks){
            for (day = startingDayEl; day <= numOfDays ; ++day)
                cout <<day << "\t";
        startingDay=(numOfDays-startingDayEl)+2;
        }
        else {
        for (day = startingDayEl; day < startingDayEl+7; ++day)
            cout <<day << "\t";
        }

        startingDayEl=day;
        cout << endl;
    }

    if (startingDay>7)
         return startingDay=1;
    else
         return startingDay;
   }


bool determiningLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
}

void printYearCalender(int year, int startingDay){
    int monthCount;
    int startingDayFeb, startingDayMar, startingDayAp, startingDayMay, startingDayJune;
    int startingDayJuly, startingDayAug, startingDaySep, startingDayOct;
    int startingDayNov, startingDayDec;

    cout<<"January "<<year<<endl;
    startingDayFeb=printMonthCalender(31, startingDay);
    cout<<endl;

    cout<<"February "<<year<<endl;
    if (determiningLeapYear(year))
        startingDayMar=printMonthCalender(29, startingDayFeb);
    else
        startingDayMar=printMonthCalender(28, startingDayFeb);
    cout<<endl;

    cout<<"March "<<year<<endl;
    startingDayAp=printMonthCalender(31, startingDayMar);
    cout<<endl;

    cout<<"April "<<year<<endl;
    startingDayMay=printMonthCalender(30, startingDayAp);
    cout<<endl;

    cout<<"May "<<year<<endl;
    startingDayJune=printMonthCalender(31, startingDayMay);
    cout<<endl;

    cout<<"June "<<year<<endl;
    startingDayJuly=printMonthCalender(30, startingDayJune);
    cout<<endl;

    cout<<"July "<<year<<endl;
    startingDayAug=printMonthCalender(31, startingDayJuly);
    cout<<endl;

    cout<<"August "<<year<<endl;
    startingDaySep=printMonthCalender(31, startingDayAug);
    cout<<endl;

    cout<<"September "<<year<<endl;
    startingDayOct=printMonthCalender(30, startingDaySep);
    cout<<endl;

    cout<<"October "<<year<<endl;
    startingDayNov=printMonthCalender(31, startingDayOct);
    cout<<endl;

    cout<<"November "<<year<<endl;
    startingDayDec=printMonthCalender(30, startingDayNov);
    cout<<endl;

    cout<<"December "<<year<<endl;
    printMonthCalender(31, startingDayDec);
    cout<<endl;
    }
