#include <iostream>
using namespace std;

int main (){
    float a = 5.4;
    int b = 9;

    
    cout << ((a == 0) || (a > b)) << endl;
    cout << ((a == 0) || (a < b)) << endl;
    cout << ((a == 5.4) || (a > b)) << endl;
    cout << ((a == 5.4) || (a < b)) << endl;

    //ini operator or ||
    cout <<"ini adalah implementasi operator ||: " << endl;
    cout << ((a == 0) || (a>b)) << endl;  //false
    cout << ((a == 0) || (a<b)) << endl;  //true
    cout << ((a == 15) || (a>b)) << endl; //true
    cout << ((a == 15) || (a<b)) << endl; //true
    cout << ((a == 0) || (a>b)) << endl;  //true
    cout << ((a == 0) || (a<b)) << endl;  //false
    cout << ((a == 15) || (a>b)) << endl; //true
    cout << ((a == 15) || (a<b)) << endl; //true
}