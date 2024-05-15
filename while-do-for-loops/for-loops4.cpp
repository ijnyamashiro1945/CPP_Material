#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number for rows: ";
    int row;
    cin >> row;

    /*for (int r = 1; r <= row; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;*/

    // Sama sisi
    for (int s = 1; s <= row; s++)
    {
        for (int t = 1; t <= (row - s); t++)
        {
            cout << "  ";
        }

        for (int a = 1; a <= 2 * s - 1; a++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}