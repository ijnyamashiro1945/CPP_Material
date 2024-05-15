#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    int grade;
    string answer, democlass;

    cout <<"Enter your name, please: ";
    cin >> name;
    cout <<"\nWhat class are you studying right now (1 - 12): ";
    cin >> grade;
    cout <<"\nAre you enroled in BrightChamps? \nYes / No: ";
    cin >> answer;

    if(answer == "Yes" || answer == "yes"){
        if( grade <= 1 || grade <= 2)
        {
            cout <<"\nWelcome " << name << ", You are in Little Champs Paid class";
        }
        else if(3 <= grade && grade <=6)
        {
            cout <<"\nWelcome " << name << ", You are in Junior Champs Paid class";
        }
        else if(7 <= grade && grade <=12)
        {
            cout <<"\nWelcome " << name << ", You are in Senior Champs Paid class";
        }
        else
        {
            cout <<"\nYou have inputed an invalid grade, program will exit";
            exit(0);
        }
    }
    else if (answer == "No" || answer == "no")
        {
            cout <<" do you want to enrol the demo class?: \nYes / No: ";
            cin >> democlass;

            if(answer == "Yes" || answer == "yes"){
        if( grade <= 1 || grade <= 2)
        {
            cout <<"\nWelcome " << name << ", You have been enrolod for Little Champs demo class";
        }
        else if(3 <= grade && grade <=6)
        {
            cout <<"\nWelcome " << name << ", You have been enroled for Junior Champs demo class";
        }
        else if(7 <= grade && grade <=12)
        {
            cout <<"\nWelcome " << name << ", You have been ennroled for Senior Champs demo class";
        }
        else
        {
            cout <<"\nYou have inputed an invalid grade, program will exit!";
            exit(0);
        }
        }
        else if (democlass == "No" || democlass == "no")
        {
            cout <<"Thank You for visiting the program will sotped and exit!";
            exit(0);
        }
        else
        {
            cout <<"Wrong input, program will exit now!";
            exit(0);
        }



} 
}