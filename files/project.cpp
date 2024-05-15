#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // deklarasi variable penyimpanan file
    string filename;

    // meminta pengguna memberi input nama file
    cout << "Masukan nama file anda: ";
    cin >> filename;

    // membuka file yang telah diinput
    ifstream infile(filename.c_str());

    // print lines
    for (int i = 0; i <= 35; i++)
    {
        cout << "-";
    }
    cout << endl;

    // Membaca isi file
    string line;
    while (getline(infile, line))
    {
        cout << line << endl;
    }

    infile.close();

    return 0;
}