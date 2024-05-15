#include <iostream>
using namespace std;

// function definition to swap the values.
void swap(int &x, int &y)
{
    int save;
    save = x; /*save the value at address x*/
    x = y;    /*put y into x*/
    y = save; /*put x into y*/

    return;
}

int main()
{
    int a;
    int b;

    cout << "Enter an interger to store variable a: ";
    cin >> a;
    cout << "Enter an interger to store variable b: ";
    cin >> b;

    cout << "Before swap, value of a: " << a << endl;
    cout << "Before swap, value of b: " << b << endl;

    /*Calling a function to swap the values using variables refernce.*/
    swap(a, b);

    cout << "After swap, value of a: " << a << endl;
    cout << "After swap, value of b: " << b << endl;

    return 0;
}