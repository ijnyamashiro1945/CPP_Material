#include <iostream>
using namespace std;
int main()
{
    string satuNama = "Danis";

    string morenama[3] = {"yanto", "yanti", "yono"};

    cout << "Nilai variable array: " << morenama << endl;

    cout << "Nilai var biasa: " << satuNama << endl;

    for (int d = 0; d <= 3; d++)
    {
        cout << "Nilai variable : " << d << ": " << morenama[d] << endl;
    }
}