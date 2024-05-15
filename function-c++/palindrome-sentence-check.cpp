#include <iostream>
using namespace std;

// Fungsi untuk menghapus spasi dan mengubah huruf menjadi huruf kecil
string cleanString(const string &str)
{
    string result;
    for (char ch : str)
    {
        if (isalpha(ch))
            result += tolower(ch);
    }
    return result;
}

// Fungsi untuk mengecek apakah kata adalah palincdrome
bool isPalindrome(const string &word)
{
    string cleanStr = cleanString(word);
    string reversedStr = cleanStr;

    // Menghitung panjang kata
    int length = reversedStr.length();

    // Menginisialisasi indeks untuk karakter pertama dan terakhir
    int i, j;
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        // Membandingkan karakter dari kedua ujung
        if (reversedStr[i] != reversedStr[j])
        {
            return false; // bukan palindrome
        }
    }
    return true; // palindrome
}

int main()
{
    string kata;

    while (true)
    {
        // meminta pengguna untuk memasukan kata
        cout << "Masukan kata (q for exit): ";
        getline(cin, kata);
        // apabila kata q ditekan akan exit dari program
        if (kata == "q")
        {
            cout << "You exited the program" << endl;
            break;
        }
        // mengecek apakah kata adalah palindrome
        if (isPalindrome(kata))
        {
            cout << kata << " adalah palindrome" << endl;
        }
        else
        {
            cout << kata << " adalah bukan palindrome" << endl;
        }
    }
}