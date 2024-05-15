#include <iostream>
using namespace std;

int main() {
    int a = 15;
    int b = 19;


    //ini operator and = &&
    cout <<"ini adalah implementasi operator &&: " << endl;
    cout << ((a == 0) && (a>b)) << endl;  //false
    cout << ((a == 0) && (a<b)) << endl;  //false
    cout << ((a == 15) && (a>b)) << endl; //true
    cout << ((a == 15) && (a<b)) << endl; //true
    cout << ((a == 0) && (a>b)) << endl;  //false
    cout << ((a == 0) && (a<b)) << endl;  //false
    cout << ((a == 15) && (a>b)) << endl; //true
    cout << ((a == 15) && (a<b)) << endl; //true

    cout << ((a == 0) && (a > b)) << endl;
    cout << ((a == 0) && (a < b)) << endl;
    cout << ((a == 5.4) && (a > b)) << endl;
    cout << ((a == 5.4) && (a < b)) << endl;

    return 0;
}