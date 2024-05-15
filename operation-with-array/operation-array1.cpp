#include <iostream>
using namespace std;

int main()
{
    int marks[8], i;
    float sum = 0;
    cout << "\n Enter Marks of Each Subject (Out of 100): \n";
    cout << "\n Geography: ";
    cin >> marks[0];
    cout << "\n English  : ";
    cin >> marks[1];
    cout << "\n Maths    : ";
    cin >> marks[2];
    cout << "\n History  : ";
    cin >> marks[3];
    cout << "\n Science  : ";
    cin >> marks[4];
    cout << "\n Biology  : ";
    cin >> marks[5];
    cout << "\n Physics  : ";
    cin >> marks[6];
    cout << "\n Japanese : ";
    cin >> marks[7];

    for (i = 0; i < 8; i++)
    {
        sum = sum + marks[i];
    }

    float avg = sum / 8;
    float per;
    per = (sum / 800) * 100;
    cout << "\n Average Marks = " << avg;
    cout << "\n Percentage = " << per << " %";

    return 0;
}