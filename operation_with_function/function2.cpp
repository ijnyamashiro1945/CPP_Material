#include <iostream>
using namespace std;

// Program Computate absolute value
// Works for both int and float

// This is global variable
int num1;
float num2;

// Function with float type parameter
float absolute(float num2)
{
    if (num2 < 0.0)
    {
        num2 = -num2;
    }
    return num2;
}

// function with int type parameter
int absolute(int num1)
{
    if (num1 < 0)
    {
        num1 = -num1;
    }
    return num1;
}

int main()
{
    cout << "Enter an -ve interger value: ";
    cin >> num1;

    cout << "Enter an -ve float value (e.g. -56.67f): ";
    cin >> num2;

    // call function with int type parameter
    cout << "\nAbsolute value of " << num2 << " = " << absolute(num2) << endl;

    // call function float type parameter
    cout << "\nAbsolute value of " << num1 << " = " << absolute(num1) << endl;
    return 0;
}