#include <iostream>
#include <string>
using namespace std;
int main() {
  string namaPemesan, namaMenu;
    int pilihanMenu, jumlahPesanan;
    double hargaSatuan = 0, totalPesanan = 0, diskon = 0, totalPembayaran = 0;
    cout << "Masukkan Nama Pemesan: ";
    getline(cin, namaPemesan);
    cout << endl;
    cout << "=== MENU KANTIN ===" << endl;
    cout << "1. Nasi Goreng - Rp15000" << endl;
    cout << "2. Mie Goreng  - Rp12000" << endl;
    cout << "3. Bakso       - Rp10000" << endl;
    cout << "4. Es Teh      - Rp5000" << endl;


          cout << "Pilih menu: ";
    cin >> pilihanMenu;
    cout << "Masukkan jumlah pesanan: ";
    cin >> jumlahPesanan;

    switch (pilihanMenu) {
        case 1:
            namaMenu = "Nasi Goreng";
            hargaSatuan = 15000;
            break;
        case 2:
            namaMenu = "Mie Goreng";
            hargaSatuan = 12000;
            break;
        case 3:
            namaMenu = "Bakso";
            hargaSatuan = 10000;
            break;
        case 4:
            namaMenu = "Es Teh";
            hargaSatuan = 5000;
            break;
        default:
            namaMenu = "Menu Tidak Valid";
            hargaSatuan = 0;
            break;
    }

    if (hargaSatuan > 0) {
        totalPesanan = hargaSatuan * jumlahPesanan;

        // Diskon 8% jika total pemesanan lebih dari Rp40.000
        if (totalPesanan > 40000) {
            diskon = 0.08 * totalPesanan;
        } else {
            diskon = 0;
        }

        totalPembayaran = totalPesanan - diskon;

        cout << "\n===== STRUK PEMBAYARAN =====" << endl;
        cout << "Nama Pemesan    : " << namaPemesan << endl;
        cout << "Harga Satuan    : Rp" << hargaSatuan << endl;
        cout << "Jumlah Pesanan  : " << jumlahPesanan << endl;
        cout << "Total Pesanan   : Rp" << totalPesanan << endl;
        cout << "Diskon 8%       : Rp" << diskon << endl;
        cout << "Total Pembayaran: Rp" << totalPembayaran << endl;
        cout << "Terima kasih telah memesan!" << endl;
    } else {
        cout << "\nPilihan menu tidak valid!" << endl;
    }

    cout << "----------------------------------------" << endl;

    return 0;
}

