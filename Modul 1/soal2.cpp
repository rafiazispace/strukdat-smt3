#include <iostream>
#include <string>
using namespace std;
string disebut(int n) {
    string angka[] = {"", "satu", "dua", "tiga", "empat", "lima", 
                    "enam", "tujuh", "delapan", "sembilan", "sepuluh", "sebelas"};
    if (n == 100) {
        return "seratus";
    } else if (n < 12) {
        return angka[n];
    } else if (n < 20) {
        return disebut(n - 10) + " belas";
    } else if (n < 100) {
        return disebut(n / 10) + " puluh " + disebut(n % 10);
    }
    return ""; 
}
int main() {
    int input;
    cout << "Masukkan angka 0 s.d 100: ";
    cin >> input;
    if (input < 0 || input > 100) {
        cout << "Hanya menerima input 0 s.d 100" << endl;
    } else if (input == 0) {
        cout << input << " : nol" << endl;
    } else {
        cout << input << " : " << disebut(input) << endl;
    }
    return 0;
}