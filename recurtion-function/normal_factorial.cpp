#include <iostream>
using namespace std;

// Function for factorial
int faktorial(int n)
{
    if (n <= 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * faktorial(n - 1);
    }
}

int main()
{
    int input;
    while (true)
    {
        cout << "Enter the number: " << endl;
        cin >> input;

        int check = faktorial(input);

        if (input <= 1)
        {
            cout << "You have exited the program" << endl;
            break;
        }

        else if (check)
        {
            cout << "Factorial of " << input << " are: " << check << endl;
        }
        else
        {
            cout << "Invalid input" << endl;
        }
    }
    return 0;
}
