#include <iostream>
using namespace std;

int main() {
double price1, price2, taxRate, basePrice;
double priceAfterOff, priceAfterDiscounts, tax;
float totalPrice;
char clubCard;

    cout<<"Enter price of first item: ";
    cin>>price1;

    cout<<"Enter price of second item: ";
    cin>>price2;

    cout<<"Does customer have a club card? (Y/N): ";
    cin>>clubCard;

    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin>>taxRate;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    basePrice=price1+price2;

    cout<<"Base price: "<<basePrice<<endl;

    if (price1>price2)
        priceAfterOff=price1 + (price2*0.5);
    else
        priceAfterOff=price2 + (price1*0.5);

    if (clubCard=='y' || clubCard=='Y')
        priceAfterDiscounts=priceAfterOff*0.9;
    else
       priceAfterDiscounts=priceAfterOff;

    cout<<"Price after discounts: "<<priceAfterDiscounts<<endl;

    tax= taxRate/100;

    cout.setf(ios::fixed);
    cout.setf(ios::fixed);
    cout.precision(5);
    totalPrice=priceAfterDiscounts * (1+tax);

    cout<<"Total price: "<<totalPrice<<endl;
    cin>>totalPrice;

    return 0;
}
