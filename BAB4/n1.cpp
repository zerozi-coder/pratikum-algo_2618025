#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    string nim;
    long long pendapatan;
    int tanggungan;
    double tarif = 0.0;
    long long pajakDasar = 0;
    long long pajakAkhir = 0;

    cout << "===== PROGRAM PAJAK PENDAPATAN =====" << endl;
    cout << endl;

    // a. Masukan Nama dan NIM pengguna
    cout << "Nama Anda : ";
    getline(cin, nama);
    cout << "NIM Anda  : ";
    cin >> nim;

    cout << endl;
    cout << "          DATA PENDAPATAN          " << endl;
    
    // Input pendapatan bulanan dan status tanggungan
    cout << "Pendapatan bulanan: Rp. ";
    cin >> pendapatan;

    // c. Aturan: Jika pendapatan negatif, input tidak valid
    if (pendapatan < 0) {
        cout << "Error: Pendapatan tidak valid (negatif)!" << endl;
        return 1;
    }

    cout << "Memiliki tanggungan? (1=Ya, 0=Tidak): ";
    cin >> tanggungan;
	//hskdjskaj
    // b. Menghitung pajak simulasi berdasarkan pendapatan bulanan
    if (pendapatan < 5000000) {
        tarif = 0.0;
    } else if (pendapatan >= 5000000 && pendapatan < 10000000) {
        tarif = 0.05;
    } else if (pendapatan >= 10000000 && pendapatan < 20000000) {
        tarif = 0.10;
    } else {
        tarif = 0.15;
    }

    // Hitung pajak dasar
    pajakDasar = pendapatan * tarif;
    pajakAkhir = pajakDasar;

    // c. Aturan: Jika memiliki tanggungan (1), berikan pengurangan pajak sebesar Rp100.000
    if (tanggungan == 1) {
        pajakAkhir = pajakAkhir - 100000;
    }

    // c. Aturan: Pajak akhir tidak boleh kurang dari nol
    if (pajakAkhir < 0) {
        pajakAkhir = 0;
    }

    cout << endl;
    // Menampilkan hasil sesuai format contoh
    cout << "Tarif pajak: " << (tarif * 100) << "%" << endl;
    cout << "Pajak akhir: Rp" << pajakAkhir << endl;
    cout << "-----------------------------------" << endl;

    return 0;
}
