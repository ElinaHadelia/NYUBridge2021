#include <iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);

int main() {

    int n, m, triangles;
    char symbol, symbolTri;

    cout<<"Section a."<<endl;
    cout<<"Please input an positive integer for the number of triangles in the tree: ";
    cin>>n;
    cout<<"Please input an positive integer for the number of spaces from the left margin: ";
    cin>>m;
    cout<<"Please input a character (e.g. *, +, $, #, % etc) for filling the tree: ";
    cin>>symbol;

    printShiftedTriangle(n, m, symbol);

    cout<<endl;
    cout<<"Section b."<<endl;
    cout<<"Please input an positive integer for the number of triangles: ";
    cin>>triangles;
    cout<<"Please input a character (e.g. *, +, $, #, % etc) for filling the tree: ";
    cin>>symbolTri;

    printPineTree(triangles, symbolTri);

    return 0;
}

void printShiftedTriangle(int n, int m, char symbol) {
    int lineNumber, spaceNum, symCount;

    for (lineNumber = 1; lineNumber <= n; lineNumber += 1) {
        for (spaceNum = 1; spaceNum <= (n - lineNumber) + m; spaceNum += 1)
            cout<<" ";
        for (symCount = 1; symCount <= (2 * lineNumber) - 1; symCount += 1)
                cout << symbol;

    cout << endl;
}
}

void printPineTree(int n, char symbol){
    int numberOfTriangles;

    for (numberOfTriangles=1; numberOfTriangles<=n; numberOfTriangles+=1)
        printShiftedTriangle(numberOfTriangles+1, n-numberOfTriangles, symbol);

}
