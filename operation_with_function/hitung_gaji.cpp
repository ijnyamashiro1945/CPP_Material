#include <iostream>
using namespace std;

// UDF [User Defined Function]
double hitungGajiPokok(int jamKerja)
{
    double gajiPokok = jamKerja * 100000;
    return gajiPokok;
}

double hitungGajiLembur(int jamLembur)
{
    double gajiLembur = jamLembur * 150000;
    return gajiLembur;
}

double hitungTotalGaji(double gajiPokok, double gajiLembur)
{
    double totalGaji = gajiPokok + gajiLembur;
    return totalGaji;
}

// Main Function
int main()
{
    int kerja, lembur;

    cout << "Enter your work shift hour: ";
    cin >> kerja;

    cout << "Enter your overtime shift hour:";
    cin >> lembur;

    double gajiPokok = hitungGajiPokok(kerja);
    double gajiLembur = hitungGajiLembur(lembur);
    double totalGaji = hitungTotalGaji(kerja, lembur);

    // line
    for (int i = 0; i <= 35; i++)
    {
        cout << "-";
    }
    cout << endl;

    cout << "Gaji pokok: " << gajiPokok << endl;
    cout << "Gaji lembur: " << gajiLembur << endl;
    cout << "Total Gaji: " << totalGaji << endl;

    return 0;
}