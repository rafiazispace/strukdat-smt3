#include <iostream>
using namespace std;

void tukarDanKali(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    a *= 10;
    b *= 10;
}
int main() {
    int x, y;
    cin >> x >> y;
    tukarDanKali(x, y);
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}