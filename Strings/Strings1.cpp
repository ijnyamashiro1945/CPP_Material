#include <iostream>
using namespace std;

int main (){
    string str1, str2;

    cout <<"Enter a string: ";
    cin >> str1;                //Ngambil Kata pertama atau jika kelebihan akan dibagi ke str2
    cout <<"First String: " << str1 << endl;

    cout <<"Enter another string: " << endl;
    getline(cin, str2);         //Menerima kelebihan string dari str1

    cout <<"Second String: " << str2 <<endl;

    return 0;
}