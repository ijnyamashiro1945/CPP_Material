#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int num = 1;

    do
    {
        Sleep(1000);
        cout << "Hehe " << num << endl;
        num++;
    } while (num < 11);
    return 0;
}