#include <iostream>
using namespace std;

// Variable global dengan inisialisasi
int global_initilaized_var = 42;

// Variable global tanpai inisialisasi
int global_unitialized_var;

// Fungsi yang mengalokasikan memori di heap
void allocate_memory_on_heap(){
    int * dynamic_var = new int;
    if (dynamic_var == nullptr){
        cout << "Gagal mengalokasikan memori di heap" << endl;
        return;
    }
    *dynamic_var = 100;
    cout << "Nilai di heap: " << * dynamic_var << endl;
    delete dynamic_var; //Delokasi memori
}

int main(){
    // Variable lokal di stack
    int local_var = 10;

    cout << "Variable global dengan inisialisasi: " << global_initilaized_var << endl;
    // Akan memiliki nilai nol
    cout << "Variable global tanpa inisialisasi: " << global_initilaized_var << endl;

    // Panggil fungsi yang mengalokasikan memori di heap
    allocate_memory_on_heap();

    return 0;
}