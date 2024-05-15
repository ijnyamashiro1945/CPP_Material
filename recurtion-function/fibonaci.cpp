#include <iostream>
using namespace std;
// Fibanoci adalah deretan angka yang di tambah dengan bilangan di belakangnya

// Function for factorial
int fibanocci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibanocci(n - 1) + fibanocci(n - 2);
    }
}

int main()
{
    int input;
    while (true)
    {
        cout << "Enter the number: " << endl;
        cin >> input;

        int check = fibanocci(input);
        if (input <= 1)
        {
            cout << "You have exited the program" << endl;
            break;
        }
        else
        {
            cout << "Invalid input" << endl;
            for (int i = 0; i < input; i++)
            {
                cout << fibanocci(i) << " ";
            }
            cout << check << endl;
        }
    }
    return 0;
}
