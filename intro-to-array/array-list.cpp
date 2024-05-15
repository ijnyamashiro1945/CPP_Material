#include <iostream>
#include <list>
using namespace std;

int main()
{
    // deklarasi array
    string nama_siswa[5];
    // inisialisasi
    for (int i = 0; i < 5; i++)
    {
        cout << "Masukan nama siswa ke-" << i + 1 << ": ";
        cin >> nama_siswa[i];
    }
    // mencetak
    cout << "Mencetak nama siswa yg diinput pada array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Nama siswa ke-" << i + 1 << ": " << nama_siswa[i] << endl;
    }

    cout << "___________________________" << endl;
    // deklarasi list
    list<string> daftar_belanja;
    list<int> jumlah;

    // menambah elemen ke list
    daftar_belanja.push_back("Beras");
    daftar_belanja.push_back("Garam");
    daftar_belanja.push_back("Tepung");
    jumlah.push_back(2);
    jumlah.push_back(50);
    jumlah.push_back(20);

    cout << "___________________________" << endl;
    cout << "hasil dari tipe data collection list" << endl;
    // mencetak list
    cout << "1. Daftar Belanja: " << endl;
    for (const string &item : daftar_belanja)
    {
        cout << "  ";
        cout << "- " << item << endl;
    }
    cout << endl;

    cout << "2. Jumlah Barang Yang Dibeli: " << endl;
    for (const int &item : jumlah)
    {
        cout << "  ";
        cout << "- " << item << endl;
    }

    return 0;
}