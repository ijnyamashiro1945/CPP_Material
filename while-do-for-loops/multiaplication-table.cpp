#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the number to print the table: ";
    cin >> num;
    int i = 1;

    cout << "Welcome to Multiplication Table";
    while (i <= 10)
    {
        cout << i << " x " << num << " = " << num * i << endl;
        i++;
    }
}