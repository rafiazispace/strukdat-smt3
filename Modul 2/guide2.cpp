#include <iostream>
using namespace std;   
    // fungsi (punya return value)
    int maks3(int a, int b, int c) {
        int temp_max = a;
        if (b > temp_max) {
            temp_max = b;
        }
        if (c > temp_max) {
            temp_max = c;
        }
        return temp_max;
    }
       
    // Procedure (pakai void, tidak punya return value)
    void tulis(int x) {
        for (int i = 0; i < x; i++) {
            cout << "baris ke-" << i + 1<< endl;
        }
    }

   int main() {
    // Manggil fungsi, nilainya disimpan
    int hasil_maks = maks3(10, 50, 30);
    cout << "Hasil Maksimum: " << hasil_maks << endl;
    
    // Manggil prosedure, dia langsung jalan tugasnya
    cout << "Mulai panggil procedure:" << endl;
    tulis(3);
    
    return 0;
    }