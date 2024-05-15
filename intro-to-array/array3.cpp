#include <iostream>
using namespace std;

int main()
{
    char word[5] = {'a', 'b', 'c', 'd', 'e'};
    char numbers[5] = {10, 0, 20, 0, 30};

    for (int i = 0; i < 5; i++)
    {
        cout << "Char Array Element At " << i << " index: " << word[i] << endl;
        cout << "Interger Array Element At " << i << " index: " << numbers[i] << endl;
    }
}