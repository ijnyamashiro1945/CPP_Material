#include <iostream>
using namespace std;

int main(){
    //3 string>
    string name;
    float age;
    int study;
    string hobby;
    string address;

    //ask the user >
    cout << "Type your first name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "In which class are you in school?: ";
    cin >> study;
    cout << "What is your hobby?: ";
    cin >> hobby;
    cout << "Where do you live?: ";
    cin >> address;

    //Prints the entered data >
    cout<< "\n\n Hallo, mein Name ist "<<name <<", Ich bin "<<age <<" Alter."<<"Jhar alt \n" << " und lerne in der "<<study <<  "-ten Schulstufe" << ", My hobby is " <<hobby <<", and i live in " <<address << " That's all";

    return 0;
}