#include <iostream>
#include <string>
using namespace std;

int main(){
    bool fever, loss_of_taste, loss_of_smell, cough, tiredness, result, tickets, luggage;
    string name;
    float age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age ;

    cout << "\nWelcome " << name << ", to Corona Checking Centre,\nIt is mandatory to get checked for corona symptoms before you board the flight!" << endl;
    cout << "Enter the following details with full honesty to generate your report" << endl;
    cout << "Instructions for users: Enter 0 for NO and 1 for YES" << endl;
    cout << "---------------------------------------------------" << endl;

    cout << "\n 1. Have you've been feelings feverish past this day?:  ";
    cin >> fever;
    cout << "\n 2. Have you been feeling couldn't taste anything past this day?:  ";
    cin >> loss_of_taste;
    cout << "\n 3. Have you couldn't smell things past this day?:  ";
    cin >> loss_of_smell;
    cout << "\n 4. Have you been coughing past this day?:  ";
    cin >> cough;
    cout << "\n 5. Have you been feeling tired or exhausted past this day?:  ";
    cin >> tiredness;
    result = (fever && (loss_of_taste || loss_of_smell) && cough && tiredness);
    if (result == 0){
        cout << "\nCorona Positive, Negative (0) or Positive (+) = " << "Negative" << "\n\n";
    }
    else {
        cout << "\nCorona Positive, Negative (-) or Positive (+) = " << "Positive" << "\n\n";
    }

    if(result == 0){
        cout << "Answer with No (0) or Yes (1)";
        cout << "\nDo you have valid tickets?: ";
        cin >> tickets;

        cout << "\nDo you want your luggage checked in?: ";
        cin >> luggage;

        bool board = ((luggage || (!result)) && tickets);

        if (board == 0){
            cout << "\n!!Boarding process incomplete!!";
        }
        else if (board == 1){
           cout << "\nBoarding process completed, Go to the plane now or you'll missed the flight." << name;
        }
    }

    if(result == 1){
         cout << name << ", You seem to got the virus, based and the symptoms." << endl;
            cout << "We couldn't board you to the flight. Sorry not sorry. Auf wiedersein!" << endl;
    }
    return 0;
}