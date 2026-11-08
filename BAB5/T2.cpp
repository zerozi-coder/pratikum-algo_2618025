#include <iostream>
using namespace std;
int main() {
    int pilihan;
    cout << "========================================" << endl;
    cout << "    PROGRAM MENGHITUNG LUAS BANGUN DATAR" << endl;
    cout << "========================================" << endl;
    cout << "Pilih Bangun Datar:" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Masukkan pilihan (1-3): ";
    cin >> pilihan;
    cout << "----------------------------------------" << endl;

    switch (pilihan) {
        case 1: {
            float sisi, luas;
            cout << "--- Menghitung Luas Persegi ---" << endl;
            cout << "Masukkan panjang sisi: ";
            cin >> sisi;
            luas = sisi * sisi;
            cout << "Luas Persegi = " << luas << endl;
            break;
        }
        case 2: {
            float panjang, lebar, luas;
            cout << "--- Menghitung Luas Persegi Panjang ---" << endl;
            cout << "Masukkan panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar: ";
            cin >> lebar;
            luas = panjang * lebar;
            cout << "Luas Persegi Panjang = " << luas << endl;
            break;
        }
        case 3: {
            float alas, tinggi, luas;
            cout << "--- Menghitung Luas Segitiga ---" << endl;
            cout << "Masukkan alas: ";
            cin >> alas;
            cout << "Masukkan tinggi: ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            cout << "Luas Segitiga = " << luas << endl;
            break;
        }
        default:
            cout << "Pilihan tidak valid! Silakan pilih angka 1 sampai 3." << endl;
            break;
    }

    return 0;
}

