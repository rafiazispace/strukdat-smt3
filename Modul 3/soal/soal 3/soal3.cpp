#include <iostream>
using namespace std;

void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void tukarArray(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int x = 10, y = 20;
    int *ptr1 = &x;
    int *ptr2 = &y;
    cout << "Array A:" << endl;
    tampilArray(A);
    cout << "\nArray B:" << endl;
    tampilArray(B);
    int baris, kolom;
    cout << "\nMasukkan posisi yang akan ditukar (baris kolom, 0-2): ";
    cin >> baris >> kolom;
    if (baris < 0 || baris > 2 || kolom < 0 || kolom > 2) {
        cout << "Posisi tidak valid!" << endl;
    } else {
        tukarArray(A, B, baris, kolom);
        cout << "\nSetelah ditukar pada posisi [" << baris << "][" << kolom << "]" << endl;
        cout << "Array A:" << endl;
        tampilArray(A);
        cout << "\nArray B:" << endl;
        tampilArray(B);
    }
    cout << "\nSebelum tukar pointer: *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
    tukarPointer(ptr1, ptr2);
    cout << "Sesudah tukar pointer: *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
    return 0;
}