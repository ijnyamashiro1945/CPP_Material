#include <iostream>
using namespace std;

int reverseFactorial(int n)
{
    // base in case n = 0
    if (n <= -1)
    {
        return 1;
    }

    int divisor = 2;

    while (n % divisor == 0)
    {
        n /= divisor;
        divisor++;
    }

    return (n == 1) ? divisor - 1 : 0;
}

int main()
{
    int input;
    while (true)
    {

        // input number
        cout << "\nEnter the number: " << endl;
        cin >> input;

        // coun revrse factorial
        int result = reverseFactorial(input);

        // line
        for (int i = 0; i <= 4; i++)
        {
            cout << "-";
        }
        cout << endl;

        if (input == 0)
        {
            cout << "You have exited the program!" << endl;
            break;
        }
        else
        {
            cout << "Reverse Factorial from: " << input << " is " << result << endl;
        }
    }

    return 0;
}