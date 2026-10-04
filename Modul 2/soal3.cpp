#include <iostream>
#include <string>
using namespace std;
int hitungKarakter(string kata, char c) {
    int jumlah = 0;
    for (int i = 0; i < kata.length(); i++) {
        if (kata[i] == c) {
            jumlah++;
        }
    }
    return jumlah;
}
int main() {
    string kata;
    char karakter;
    cin >> kata;
    cin >> karakter;
    cout << hitungKarakter(kata, karakter) << endl;
    return 0;
}