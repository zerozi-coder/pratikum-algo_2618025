#include <iostream>
#include <string>

using namespace std;

int main() {
    // Deklarasi variabel sesuai urutan: nama, nim, kelas, semester, ipk
    string nama;
    string nim;
    string kelas;
    int semester;
    float ipk;

    // Tampilan Header Program
    cout << "========================================\n";
    cout << "      PROGRAM BIODATA MAHASISWA         \n";
    cout << "========================================\n";

    // Proses Input Data (Sesuai urutan yang diminta)
    cout << "Masukkan Nama     : ";
    getline(cin, nama); // Menggunakan getline agar spasi pada nama terbaca
    
    cout << "Masukkan NIM      : ";
    cin >> nim;
    
    cout << "Masukkan Kelas    : ";
    cin >> kelas;
    
    cout << "Masukkan Semester : ";
    cin >> semester;
    
    cout << "Masukkan IPK      : ";
    cin >> ipk;

    // Proses Output / Tampilan Hasil
    cout << "\n========================================\n";
    cout << "         HASIL BIODATA MAHASISWA        \n";
    cout << "========================================\n";
    cout << "Nama     : " << nama << endl;
    cout << "NIM      : " << nim << endl;
    cout << "Kelas    : " << kelas << endl;
    cout << "Semester : " << semester << endl;
    cout << "IPK      : " << ipk << endl;
    cout << "========================================\n";

    return 0;
}
