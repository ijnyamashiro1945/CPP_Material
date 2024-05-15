/*Tugasnya: Membuat sebuah coding yang bisa menginput nama depan dan belakang, umur, hobi, kelas, dan asaltempat.
Mengprint semua yang telah diinput.*/

#include <iostream>
using namespace std;

int main () {
    //string
    string firstname;
    string lastname;
    int age;
    string hobby;
    int grade;
    string place;

    //main
    cout <<"Enter your first name: ";
    getline(cin, firstname);
    cout <<"Enter your last name: ";
    getline(cin, lastname);
    cout <<"Enter your age: ";
    cin >> age;
    cout <<"Enter your hobby (max 1): ";
    cin >> hobby;
    cout <<"Enter your grade: ";
    cin >> grade;
    cout <<"Where do you live (Provinces): ";
    cin  >> place;

    //print
    cout <<"\nMy name is, ", firstname + lastname,  " and i'm ", age, "years old, and my hobby is ", hobby, "\n I'm curently studying at ", grade, " grade. And i live with my family in ", place, " ,That's all. Thank you";
}