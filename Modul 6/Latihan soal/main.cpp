#include "doublylist.h"

int main() {
    List L;
    CreateList(L);
    infotype x;
    address P;
    char lagi;
    do {
        cout << "masukkan nomor polisi: ";
        cin >> x.nopol;
        cout << "masukkan warna kendaraan: ";
        cin >> x.warna;
        cout << "masukkan tahun kendaraan: ";
        cin >> x.thnBuat;
        if (findElm(L, x) != NULL) {
            cout << "nomor polisi sudah terdaftar" << endl;
        } else {
            P = alokasi(x);
            insertLast(L, P);
        }
        cout << endl;
        cout << "tambah data lagi? (y/n): ";
        cin >> lagi;
        cout << endl;
    } while (lagi == 'y' || lagi == 'Y');
    printInfo(L);
    cout << endl;
    cout << "Masukkan Nomor Polisi yang dicari : ";
    cin >> x.nopol;
    cout << endl;
    address hasil = findElm(L, x);
    if (hasil != NULL) {
        cout << "Nomor Polisi : " << hasil->info.nopol << endl;
        cout << "Warna        : " << hasil->info.warna << endl;
        cout << "Tahun        : " << hasil->info.thnBuat << endl;
    } else {
        cout << "Data dengan nomor polisi " << x.nopol << " tidak ditemukan" << endl;
    }
    cout << endl;
    cout << "Masukkan Nomor Polisi yang akan dihapus : ";
    cin >> x.nopol;
    address target = findElm(L, x);
    if (target == NULL) {
        cout << "Data dengan nomor polisi " << x.nopol << " tidak ditemukan." << endl;
    } else {
        address hapus;
        if (target == L.First) {
            deleteFirst(L, hapus);
        } else if (target == L.Last) {
            deleteLast(L, hapus);
        } else {
            deleteAfter(target->prev, hapus);
        }
        dealokasi(hapus);
        cout << "Data dengan nomor polisi " << x.nopol << " berhasil dihapus." << endl;
    }

    printInfo(L);

    return 0;
}