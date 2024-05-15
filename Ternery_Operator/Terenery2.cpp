#include <iostream>
using namespace std;

int main(){

    int age;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Only a 18+ Person could vote on Pemilu!" << endl;
    cout << "---------------------------------------" << endl;

    //terenary
    string canVote = (age >= 18) ?"Yes, You can vote!" : "No, You can not vote!";
    cout << "Can you vote? " << canVote << endl;

    //if conditional
    if(age >= 18){
        cout << "Yes, You can vote!";
    }
    else{
        cout << "No, You can not vote!";
    }
    return 0;
}