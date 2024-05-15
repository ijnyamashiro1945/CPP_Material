#include <iostream>
#include "header.h"
using namespace std;

void printMessege()
{
    cout << "Hello, gaess!" << endl;
}

int main()
{
    // memanggil fungsi yg ad di header.h
    printMessege();

    // mengubah nilai var global yg dideklarasikan di headr.h
    globalVariable;

    // mencetak globalVariable
    cout << "Nilai variable global: " << globalVariable << endl;

    return 0;
}
