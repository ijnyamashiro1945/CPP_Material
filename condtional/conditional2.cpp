#include <iostream>
using namespace std;

int main () {
    int number;

    cout << "Enter an intergear: ";
    cin >> number;

    if (number % 2 == 0){
        cout << "the number " << number << " is even.";
    }
    else{
        cout << "the number " << number << " is odd.";
    }
    return 0;
}