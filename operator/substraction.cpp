#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    int num2 = 5;

    cout <<"ante usura operator - =: " << endl;
    cout <<"num1: "<< num1 << endl;
    cout <<"num2: "<< num2 << endl;

    num1 -= num2 + 2; //decrese the value of num1 from num2

    cout <<"\npost usura operator -=: " << endl;
    cout <<"num1: " << num1 << endl;
    cout <<"num2: " << num2 << endl;

    return 0;
}