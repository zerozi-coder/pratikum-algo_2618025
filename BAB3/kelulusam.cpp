#include <iostream>

using namespace std;

int main() {
    int nilaiMahasiswa, nilaiPengajar;

    // Input nilai berdasarkan dua digit NIM
    cout << "=== Program Penentuan Kelulusan Mahasiswa ===" << endl;
    cout << "Masukkan nilai pertama (Dua digit NIM Mahasiswa): ";
    cin >> nilaiMahasiswa;
    
    cout << "Masukkan nilai kedua (Dua digit NIM Pengajar): ";
    cin >> nilaiPengajar;

    // Menggunakan operator Bitwise AND (&) untuk mengevaluasi kondisi (> 60)
    // (nilai > 60) menghasilkan 1 jika benar dan 0 jika salah
    int cekMahasiswa = (nilaiMahasiswa > 60);
    int cekPengajar = (nilaiPengajar > 60);
    int hasilBitwise = cekMahasiswa & cekPengajar;

    cout << "\n--- Hasil Evaluasi ---" << endl;
    if (hasilBitwise == 1) {
        cout << "Status: LULUS (Kedua nilai di atas 60)" << endl;
    } else {
        cout << "Status: TIDAK LULUS (Minimal satu nilai tidak di atas 60)" << endl;
    }

    return 0;
}

