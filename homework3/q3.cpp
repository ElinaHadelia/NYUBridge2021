#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, insideEquation, sqrtResult, quadEquaPos, quadEquaNeg, quadEquaZero;

   cout<<"Please enter value of a: ";
   cin>>a;

   cout<<"Please enter value of b: ";
   cin>>b;

   cout<<"Please enter value of c: ";
   cin>>c;

    insideEquation= (b*b) - (4.0 * a * c);
    sqrtResult=sqrt(insideEquation);
    quadEquaPos = (-b + sqrtResult)/(2.0*a);
    quadEquaNeg = (-b - sqrtResult)/(2.0*a);
    quadEquaZero = (-b)/(2.0* a);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    if (a==0 && b==0 && c==0)
        cout<<"This equation has an infinite number of solutions.";
    else if (a==0)
        cout<<"This equation has no solution.";
    else if (insideEquation > 0)
        cout<<"This equation has two real solutions x= "<<quadEquaPos<< " and x="<<quadEquaNeg;
    else if (insideEquation ==0)
        cout<<"This equation has a single real solution x="<<quadEquaZero;
    else if (insideEquation <0)
        cout<<"This equation has no real solution.";
    return 0;
}

