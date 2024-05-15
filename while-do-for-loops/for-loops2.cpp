#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int num;
    cout << "Masukan angka yang ingin dikalikan: ";
    cin >> num;
    cout << "Table Perkalian " << num << endl;
    for (int i = 1; i <= 10; i++)
    {
        Sleep(500);
        cout << i << " x " << num << " = " << num * i << endl;
    }
}
