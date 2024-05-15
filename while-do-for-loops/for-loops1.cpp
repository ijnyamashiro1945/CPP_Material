#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    for (int i = 1; i < 27; i++)
    {
        Sleep(500);
        cout << "Number " << i << endl;
    }
}