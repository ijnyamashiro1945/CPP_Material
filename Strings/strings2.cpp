#include <iostream>
using namespace std;

int main(){
    string firstName;
    string lastName;

    cout <<"Enter your first name: ";
    getline(cin, firstName);
    cout <<"Enter your last name: ";
    getline(cin, lastName);

    string fullName = firstName + "" + lastName;
    cout <<"Concatanated full name is: " << fullName;
    cout <<"\nLenth of your name(Includeing Whitespace): " << fullName.length();

    return 0;
}