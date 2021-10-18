#include <iostream>
using namespace std;

double eApprox(int n);

int main() {
    cout.precision(30);
    for (int n = 1; n <= 15; n++) {
        cout<<"n = "<<n<<'\t'<<eApprox(n)<<endl;
    }
    return 0;
}

double eApprox(int n) {
    int i;
    double result, factorial;

    result = 1.0;
    factorial=1.0;
    for (i = 1; i <= n+1; i += 1){
        factorial*=i;
        result += 1 / factorial;
}
            return result;
    }

