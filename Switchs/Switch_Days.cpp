#include <iostream>
using namespace std;

int main()
{
    int Days;
    cout << "Masukan angka dari 1 - 7 untuk memilih Hari: ";
    cin >> Days;

    switch (Days)
    {
    case 1:
        cout << "Bang, Ini Senin lho ;-;";
        break;
    case 2:
        cout << "PR B.Ing udh dikerjain lum?";
        break;
    case 3:
        cout << "Pemilu bre... Golput y?";
        break;
    case 4:
        cout << "Makan bre bntr lagi Jumat";
        break;
    case 5:
        cout << "Besok libur... Hehe :D";
        break;
    case 6:
        cout << "Wes, Bebas aje koe";
        break;
    case 7:
        cout << "Nugas di gereja bre... Btw besok senin ;-;";
        break;
    default:
        cout << "Bor... Masukin nomer yg bener lah";
        break;
    }
    return 0;
}