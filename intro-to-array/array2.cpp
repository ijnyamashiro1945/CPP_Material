#include <iostream>
using namespace std;
int main()
{
    string satuNama = "Danis";

    string morenama[3] = {"yanto", "yanti", "yono"};

    int satuUmr = 15;

    int moreUmr[3] = {15, 29, 31};

    cout << "Nilai variable array: " << morenama << endl;

    cout << "Nilai var biasa: " << satuNama << endl;

    // var string
    for (int d = 0; d <= 3; d++)
    {
        cout << "Nilai variable : " << d << ": " << morenama[d] << endl;
    }

    cout << "Nilai angka biasa: " << endl;

    cout << "Menampilkan array Umur: " << endl;
    // var angka
    for (int u = 0; u < 3; u++)
    {
        cout << moreUmr[u] << " ";
    }
    cout << endl;
    return 0;
}