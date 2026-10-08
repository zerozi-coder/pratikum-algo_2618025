#include <iostream>

using namespace std;

int main() {
    double jariJari, tinggi;
    const double PI = 3.14159;

    cout << "=== Program Menghitung Volume Tabung ===" << endl;
    cout << "Masukkan jari-jari tabung : ";
    cin >> jariJari;
    
    cout << "Masukkan tinggi tabung    : ";
    cin >> tinggi;

    // Menghitung volume tabung (Pi * r^2 * t)
    double volume = PI * jariJari * jariJari * tinggi;

    // Menampilkan hasil dengan konversi ke bilangan bulat sesuai contoh terminal
    cout << "Volume Tabung adalah: " << (long long)volume << endl;

    return 0;
}
