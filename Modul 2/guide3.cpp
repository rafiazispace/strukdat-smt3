#include <iostream>
using namespace std;

// A. Pemanggialan dengan Nilai call by value (data asli aman)
void tukarValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
// B. Pemanggilan dengan Pointer call by pointer (data asli ikut berubah)
void tukarPointer(int *px, int *py) {
    int temp = *px;
    *px = *py;
    *py = temp;
}
// C. Pemanggilan dengan Referensi call by reference (data asli ikut berubah)
void tukarReference(int &px, int &py) {
    int temp = px;
    px = py;
    py = temp;
}

int main() {
    int a = 4, b = 6;
    cout << "Nilai awal: a = " << a << ", b = " << b << endl;

    // A. Call by Value
    tukarValue(a, b);
    cout << "Setelah tukarValue : a = " << a << ", b = " << b << endl;

    // B. Call by Pointer
    tukarPointer(&a, &b);
    cout << "Setelah tukarPointer: a = " << a << ", b = " << b << endl;

    // C. Call by Reference
    tukarReference(a, b);
    cout << "Setelah tukarReference: a = " << a << ", b = " << b << endl;
    // hasil akhir: a = 6, b = 4
    return 0;
}