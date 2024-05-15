#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct student
{
    string name;
    float marks;
};

int main()
{
    ofstream fout("student.txt");
    char ch;
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    student students[numStudents];

    for (int i = 0; i < numStudents; i++)
    {
        cout << i + 1 << ".Name: ";
        cin >> students[i].name;
        cout << i + 1 << ".Marks: ";
        cin >> students[i].marks;
        cin.ignore(); // Hapus karakter newline dari buffer
    }

    for (int i = 0; i < numStudents; i++)
    {
        fout << students[i].name << '\n'
             << students[i].marks << '\n';
    }
    fout.close();

    ifstream fin("student.txt");

    for (int i = 0; i < 40; i++)
    {
        cout << "-";
    }
    cout << endl;

    for (int j = 0; j < numStudents; j++)
    {
        getline(fin, students[j].name);
        fin >> students[j].marks;
        fin.ignore();
        cout << j + 1 << ".Student name: " << students[j].name;
        cout << "\t Marks: " << students[j].marks << '\n';
    }
    fin.close();
    return 0;
}