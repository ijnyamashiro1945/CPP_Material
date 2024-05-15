#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;

    do
    {
        cout << "\nEnter the number upto which terms should be generated: ";
        cin >> n;

        if (n < 0)
        {
            cout << "\nNegative numbers are not allowed!\n";
        }
    }

    while (n < 0);

    cout << "\nSeries Generated: ";
    for (i = 1; i <= n; i *= 2)
    {
        sum += 1;
        cout << i << " ";
    }

    cout << "\n\nSum of above series: ";
    cout << sum << endl;
}