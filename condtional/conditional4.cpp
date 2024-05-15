#include <iostream>
using namespace std;

int main()
{
    int number;

    while (true)
    {
        cout << "Enter your interger here: ";
        cin >> number;

        if ((number > 0) && ((number % 2) == 0))
        {
            cout << "the number " << number << " is even positive." << endl;
        }
        else if ((number > 0) && ((number % 2) >= 1))
        {
            cout << "the number " << number << " is odd positive." << endl;
        }

        else if ((number < 0) && ((number % 2) == 0))
        {
            cout << "the number " << number << " is even negative." << endl;
        }

        else if ((number < 0) && ((number % 2) <= 1))
        {
            cout << "the number " << number << " is odd negative." << endl;
        }

        else
        {
            cout << "Program is stoped, you entered 0!";
            break;
        }
    }
}