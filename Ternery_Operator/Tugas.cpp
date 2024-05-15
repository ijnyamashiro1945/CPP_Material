#include <iostream>
using namespace std;

int main(){
    //interger:
    int kecepatan;
    int roda_apa;

    while(true){
        cout << "Kendaraan roda apa yang sedang anda pakai?\n(Roda 2 / 4): ";
        cin >> roda_apa;
        cout << "--------------------------------------------" << endl;
        cout << "Berapakah kecepatan kamu dalam Km/h?: ";
        cin >> kecepatan;

        //Operator:
        if(roda_apa == 2){
            string roda2 = (kecepatan >= 75)? "hati-hati kamu terlau cepat!" : "Bagus kamu sudah di batas kecepatan.";
            cout << "Hey kamu! " << roda2 << endl;
        }

        else if(roda_apa == 4){
            string roda4 = (kecepatan >= 80)? "hati-hati kamu terlau cepat!" : "Bagus kamu sudah di batas kecepatan.";
            cout << "Hey kamu! " <<roda4 << endl;
        }

        else{
            cout << "Tidak ada kendaran yang teridentifikasi... Program di tutup...";
            break;
        }
    }
}