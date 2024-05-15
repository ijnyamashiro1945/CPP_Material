#include <iostream>
using namespace std;

int main() {
    int existing_subjects = 20;
    int additional_subjects;
    bool hasAdditonalSubjects;

    cout <<"Jumlah course yang anda miliki: " << existing_subjects;
    cout <<"\nApakah anda ingin mengurangi couse anda? (0: Tidak / 1: Ya): ";
    cin >> hasAdditonalSubjects;

    if (hasAdditonalSubjects){
        cout <<"Masukan angka untuk mengurangi Coursenya: ";
        cin >> additional_subjects;
        existing_subjects -= additional_subjects;
        cout <<"Hasil dari pengurangan coursenya, Silahkan di cek kembali: " << existing_subjects;
    }

    else{
        cout <<"Kau masih mempunyai " <<existing_subjects <<" Course tersisa!";
    }

    return 0;
}