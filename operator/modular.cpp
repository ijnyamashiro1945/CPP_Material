#include <iostream>
using namespace std;

int main (){
    //To store devide and divisor
    int divided, divisor;

    //To store reminder and quotient
    int remainder, quotient;

    cout << "Enter a number to divide: ";
    cin >> divided;

    cout << "\nEnter a divisor: ";
    cin >> divisor;

    remainder = divided % divisor;
    quotient = divided / divisor;

    cout << "\nRemainder when " << divided << " is divided by " << divisor << " is " << remainder << endl;
    cout << "\nQuotient when " << divided << " is devided by " << divisor << " is " << quotient << endl;
    return 0;
}