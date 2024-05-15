#include <iostream>
using namespace std;

int main(){
    //Ternery Operator:
    double examValue;

    cout << "Enter your Exam Value: ";
    cin >> examValue;

    cout << "------------------------------" << endl;
    cout << "This using Terenary operator: " << endl;


    string result = (examValue >= 40)? "passed" : "failed";
    cout << "You " << result << " the exam." << endl;

    cout << "-------------------------" << endl;
    cout << "This using if statement: " << endl;

    if(examValue >= 40){
        cout << "You passed the exam." << endl;
    }
    else{
        cout << "You faild the exam." << endl;
    }
    return 0;
}