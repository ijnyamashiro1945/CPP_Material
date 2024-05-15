#include <iostream>
using namespace std;

int main()
{
    // int
    int x = 27;
    int *p;
    p = &x;

    cout << "Nilai X adalah " << x << endl;
    cout << "Nilai p adalah " << p << endl;
    cout << "Nilai *p adalah " << *p << endl;

    // string
    string nama1 = "Halipudin";
    string *nama2;
    nama2 = &nama1;

    cout << "Nilai nama1 adalah " << nama1 << endl;
    cout << "Nilai nama2 adalah " << nama2 << endl;
    cout << "Nilai *nama2 adalah " << *nama2 << endl;

    // float
    float num1 = 3.14;
    float *num2;
    num2 = &num1;

    cout << "Nilai num1 adalah " << num1 << endl;
    cout << "Nilai num2 adalah " << num2 << endl;
    cout << "Nilai *num2 adalah " << *num2 << endl;

    return 0;
}