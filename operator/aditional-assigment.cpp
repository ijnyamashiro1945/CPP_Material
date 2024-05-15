#include <iostream>
using namespace std;

int main()
{
    int existing_subjects = 10;
    int additional_subjects;
    bool hasAdditonalSubjects;

    cout << "Numerus rerum existentium in tuo sane hoc anno: " << existing_subjects;
    cout << "\nHave vos additional subditorum? (0: No / 1: Ita): ";
    cin >> hasAdditonalSubjects;

    if (hasAdditonalSubjects)
    {
        cout << "Intra numerum subditorum a vobis: ";
        cin >> additional_subjects;
        existing_subjects += additional_subjects;
        cout << "Updated numerus rerum sunt: " << existing_subjects;
    }

    else
    {
        cout << "Adhuc habes " << existing_subjects << " res in cursum!";
    }

    return 0;
}