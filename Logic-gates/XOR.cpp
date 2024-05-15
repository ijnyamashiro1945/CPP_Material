#include <iostream>
using namespace std;

int main () {
    /*XOR adalah logical operator yang digunakan untuk mebandingkan 2 atau lebih nila boolean
    apakah nilai-nilainya tersebut berbeda.
        > Jika nilai berbeda Xor = True
        > Jika nilai sama    Xor = False*/
    
    int a = 15;
    int b = 19;

    cout << ((a == 0) ^ (a > b)) << endl;  //False

    cout << ((a == 0) ^ (a > b)) << endl;  //False

    cout << ((a == 15) ^ (a > b)) << endl; //True

    cout << ((a == 15) ^ (a > b)) << endl; //True
}