#include <iostream>
// #include <thread>
// #include <chrono>
#include <windows.h>
using namespace std;

int main()
{
    int num = 1;

    while (num < 11)
    {
        // ini untuk system selain windows
        // this_thread ::sleep_for(chrono::seconds(1));
        // Ini time sleep untuk windows
        Sleep(1000);
        cout << "Hehe " << num << endl;
        num++;
    }
    return 0;
}