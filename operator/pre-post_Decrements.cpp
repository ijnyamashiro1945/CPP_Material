#include <iostream>
using namespace std;

int main() {
    int x = 10, a;
    int y = 18, b;

    cout <<"Pre-Decrement Operation";
    cout <<"\n-------------------\n";
    a = --x;

    //value of a will change
    cout <<"\na = " << a;

    //value of x change before execution of a=--x;
    cout <<"\nX = "<< x;

    cout << "\n\nPost Decrement Operation";
    cout << "\n------------------------\n";
    b = y--;

    //value of b will not change
    cout << "\nb = " << b;

    //value of y change after execution of b=y--;
    cout <<"\ny = " <<y;
}