#include <iostream>
using namespace std;

int main() {
    int x = 26, a;
    int y = 30, b;

    cout <<"Pre-Increment Operation";
    cout <<"\n-------------------\n";
    a = ++x;

    //value akan diganti
    cout <<"\na = " << a;

    //value x akan di ganti sebelum eksekusi a= ++x
    cout <<"\nx = " << x;

    cout <<"\n\nPost-Increment Operation";
    cout <<"\n-------------------\n";
    b = y++;

    //value b tidak akan terganti
    cout <<"\nb = " << b;

    //value fari y akan di eksekusi oleh b=y++
    cout <<"\ny= " << y;
}