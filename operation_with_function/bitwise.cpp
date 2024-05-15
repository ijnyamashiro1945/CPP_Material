#include <iostream>
using namespace std;

int tambah(int a, int b)
{
    return a + b;
}

int main()
{
    int hasil = ~tambah(25, 8);
    cout << "Hasilnya adalah = " << hasil << endl;
}