#include <iostream>
#include <cstring>
using namespace std;

//fungsi global
bool isPalindrome(const string &word)
{
    int length = word.length();
    int i, j;
    for(i = 0, j = length - 1; i < j; i++, j--)
    {
        if(word[i] != word[j]){
            return false;
        }
    }

    return true;
}

int main(){
    string kata;

    while (true)
    {
        cout <<"Masukan kata (Q for exit): ";
        cin >> kata;

        if (kata == "q")
        {
            cout <<"You exited the program" << endl;
            break;
        }
        

        if (isPalindrome(kata))
        {
            cout << kata <<" adalah palindrome" << endl;
        }
        else
        {
            cout << kata <<" adalah bukan palindrome" << endl;
        }
    }

    return 0;
}