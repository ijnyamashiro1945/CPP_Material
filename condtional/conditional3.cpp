#include <iostream>
using namespace std;

int main(){
    int number;

    while(true){
        cout <<"Enter a interger: ";
        cin >> number;

        //Break
        if(number == 0){
            cout << "You entered 0, the program will exit!";
            break;
        }

        //positive
        else if(number > 0){
            cout << "The number is " << number << " a positive number!" << endl;
        }

        //negative
        else{
            cout << "The number is " << number << " a negative number!" << endl;
        }
    }
    return 0;
}