#include <iostream>
using namespace std;

int main() {
    int pilihan;
    double a, b, hasil;

    cout << "== Kalkulator Sederhana ==" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "Masukkan pilihan (1-4): ";
    cin >> pilihan;

    if (pilihan == 1) {
        cout << "Masukkan angka pertama: ";
        cin >> a;
        cout << "Masukkan angka kedua: ";
        cin >> b;
        hasil = a + b;
        cout << "Hasil: " << hasil << endl;
    } else if (pilihan == 2) {
        cout << "Masukkan angka pertama: ";
        cin >> a;
        cout << "Masukkan angka kedua: ";
        cin >> b;
        hasil = a - b;
        cout << "Hasil: " << hasil << endl;
    } else if (pilihan == 3) {
        cout << "Masukkan angka pertama: ";
        cin >> a;
        cout << "Masukkan angka kedua: ";
        cin >> b;
        hasil = a * b;
        cout << "Hasil: " << hasil << endl;
    } else if (pilihan == 4) {
        cout << "Masukkan angka pertama: ";
        cin >> a;
        cout << "Masukkan angka kedua: ";
        cin >> b;
        if (b != 0) {
            hasil = a / b;
            cout << "Hasil: " << hasil << endl;
        } else {
            cout << "Error: Tidak bisa dibagi dengan nol!" << endl;
        }
    } else {
        cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}