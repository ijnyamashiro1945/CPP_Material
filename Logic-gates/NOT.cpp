#include <iostream>
using namespace std;

int main () {
    int a = 7;
    int b = 14;

    cout << !(a == 0) << endl;  //True

    cout << !(a == 7) << endl;  //False

    cout << !(a == 14) << endl; //True

    cout << !(a == 7) << endl;  //False

    cout << !((a == 0) || (a > b)) << endl; //True | Or operator

    cout << ((a == 15) && !(a > b)) << endl;  //False | And operator
}