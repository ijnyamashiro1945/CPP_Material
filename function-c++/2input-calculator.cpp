#include <iostream>
#include <math.h>
using namespace std;

// math operator code
int addition(int num1, int num2)
{
    return num1 + num2;
}
int subtraction(int num1, int num2)
{
    return num1 - num2;
}
int multiplication(int num1, int num2)
{
    return num1 * num2;
}
float division(int num1, int num2)
{
    return static_cast<float>(num1) / num2;
}
int floor_division(int num1, int num2)
{
    return num1 / num2;
}
int moduluo(int num1, int num2)
{
    return num1 % num2;
}

int exponent(int num1, int num2)
{
    return pow(num1, num2);
}

int main()
{
    cout << "\n-- Welcome to calculator --" << endl;
    while (true)
    {
        int a, b, user_choice;
        float result;

        cout << "--------------------------------" << endl;
        cout << "Enter the first number: ";
        cin >> a;
        cout << "Enter the secodn number: ";
        cin >> b;
        cout << "Press 1 for addition" << endl;
        cout << "Press 2 for subtraction" << endl;
        cout << "Press 3 for multiplication" << endl;
        cout << "Press 4 for division" << endl;
        cout << "Press 5 for floor_division" << endl;
        cout << "Press 6 for modulus" << endl;
        cout << "Press 7 for exponent" << endl;
        cout << "Press 0 to quit" << endl;
        cout << "--------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> user_choice;
        // if else operator
        // pilihan 1
        if (user_choice == 1)
        {
            result = addition(a, b);
            cout << "Penjumlahan dari " << a << " + " << b << " = " << result << endl;
        }
        // pilihan 2
        else if (user_choice == 2)
        {
            result = subtraction(a, b);
            cout << "Penurangan dari " << a << " - " << b << " = " << result << endl;
        }
        // pilihan 3
        else if (user_choice == 3)
        {
            result = multiplication(a, b);
            cout << "perkalian dari " << a << " * " << b << " = " << result << endl;
        }
        // pilihan 4
        else if (user_choice == 4)
        {
            if (b == 0)
            {
                cout << "Error! Pembagian dengan nol tidak diperbolehkan!." << endl;
            }
            else
            {
                result = division(a, b);
                cout << "Pembagian dari " << a << " / " << b << " = " << result << endl;
            }
        }

        // pilihan 5
        else if (user_choice == 5)
        {
            if (b == 0)
            {
                cout << "Error! Pembagian dengan nol tidak diperbolehkan!." << endl;
            }
            else
            {
                result = floor_division(a, b);
                cout << "Pembagian terkecil dari " << a << " / " << b << " = " << result << endl;
            }
        }
        // pilihan 6
        else if (user_choice == 6)
        {
            result = moduluo(a, b);
            cout << "persentase dari " << a << " % " << b << " = " << result << endl;
        }
        // pilihan 7
        else if (user_choice == 7)
        {
            result = exponent(a, b);
            cout << "exponen dari " << a << " ^ " << b << " = " << result << endl;
        }
        // quit
        else if (user_choice == 0)
        {
            cout << "Kamu meninggalkan calculator!" << endl;
            break;
        }
        else
        {
            cout << "Input yang invalid, sliahakan coba lagi" << endl;
        }
    }
}