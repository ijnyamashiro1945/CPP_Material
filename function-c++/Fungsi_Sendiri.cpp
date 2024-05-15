#include <iostream>
using namespace std;

string gabungNama(string nama1, string nama2)
{
    return nama1 + " " + nama2;
}

int main()
{
    string namaDepan, namaAkhir, namaIbu, namaBapak;

    cout << "Masukan nama depan kamu: " << endl;
    getline(cin, namaDepan);

    cout << "Masukan nama akhir kamu: " << endl;
    getline(cin, namaAkhir);

    cout << "Masukan nama ibu kamu: " << endl;
    getline(cin, namaIbu);

    cout << "Masukan nama bapak kamu: " << endl;
    getline(cin, namaBapak);

    string namaDigabung = gabungNama(namaDepan, namaAkhir);
    string ortua = gabungNama(namaIbu, namaBapak);
    cout << "hasil dari penggabunganya adalah: " << namaDigabung << endl;
    cout << "Nama kedua orang tua saya: " << ortua << endl;

    return 0;

    // cout << "hasil dari penggabunganya adalah: ";
    // cout << namaDepan << " " << namaAkhir << endl;
}