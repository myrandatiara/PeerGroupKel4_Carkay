#include <iostream>
using namespace std;

double tambah(double a, double b) { return a + b; }
double kurang(double a, double b) { return a - b; }
double kali(double a, double b) { return a * b; }
double bagi(double a, double b) {
    if (b == 0) {
        cout << "Error: Tidak bisa dibagi dengan nol!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    int pilihan;
    double a, b, hasil;
    char ulang;

    do {
        cout << "\n== Kalkulator Sederhana ==" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "Masukkan pilihan (1-4): ";
        cin >> pilihan;

        cout << "Masukkan angka pertama: ";
        cin >> a;
        cout << "Masukkan angka kedua: ";
        cin >> b;

        if (pilihan == 1) {
            hasil = tambah(a, b);
            cout << "Hasil: " << hasil << endl;
        } else if (pilihan == 2) {
            hasil = kurang(a, b);
            cout << "Hasil: " << hasil << endl;
        } else if (pilihan == 3) {
            hasil = kali(a, b);
            cout << "Hasil: " << hasil << endl;
        } else if (pilihan == 4) {
            hasil = bagi(a, b);
            if (b != 0) {
                cout << "Hasil: " << hasil << endl;
            }
        } else {
            cout << "Pilihan tidak valid!" << endl;
        }

        cout << "Apakah ingin menghitung lagi? (y/n): ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');

    cout << "Terima kasih telah menggunakan kalkulator!" << endl;
    return 0;
}
