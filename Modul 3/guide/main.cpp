#include <iostream>
#include "titik.h"
using namespace std;

int main() {
    Titik tA, tB;
    cout << "Input titik pertama: " << endl;
    cout << "Input koordinat x: ";
    cin >> tA.x;
    cout << "Input koordinat y: ";
    cin >> tA.y;
    cout << "Input titik kedua: " << endl;
    cout << "Input koordinat x: ";
    cin >> tB.x;
    cout << "Input koordinat y: ";
    cin >> tB.y;

    cout << "\nHasil Rekap Koordinat: " << endl;
    tampilTitik(tA);
    tampilTitik(tB);
    
    float jarak = hitungJarak(tA, tB);
    cout << "Jarak antara titik A dan titik B: " << jarak << endl;
    return 0;
}