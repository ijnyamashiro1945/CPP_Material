#include <iostream>
using namespace std;

int main()
{

    {
        int bulan;
        cout << "Masukan angka dalam satu bluan (1 - 12)";
        cin >> bulan;

        switch (bulan)
        {
        case 1:
            cout << "Bulan Janurai";
            break;
        case 2:
            cout << "Bulan Febuari";
            break;
        case 3:
            cout << "Bulan Maret";
            break;
        case 4:
            cout << "Bulan April";
            break;
        case 5:
            cout << "Bulan Mei";
            break;
        case 6:
            cout << "Bulan Juni";
            break;
        case 7:
            cout << "Bulan Juli";
            break;
        case 8:
            cout << "Bulan Agustur";
            break;
        case 9:
            cout << "Bulan September";
            break;
        case 10:
            cout << "Bulan Oktober";
            break;
        case 11:
            cout << "Bulan November";
            break;
        case 12:
            cout << "Bulan Desember";
            break;
        default:
            cout << "Bulan Tidak Ada!";
            break;
        }
        return 0;
    }
}