#include <iostream>
using namespace std;

int main()
{
    int var;
    int *ptr;
    int **pptr;

    var = 4096;

    // take the addres of var
    ptr = &var;

    // take the addres of ptr using addres of operator &
    pptr = &ptr;

    // take the va;ue using pptr
    cout << "value of var: " << var << endl;
    cout << "value avaliable *ptr: " << *ptr << endl;
    cout << "value avaliable **pptr: " << **pptr << endl;

    return 0;
}