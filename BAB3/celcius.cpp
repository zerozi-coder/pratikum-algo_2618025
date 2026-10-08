#include <iostream>
using namespace std;

int main() {
    float celcius, reamur, fahrenheit, kelvin;

    // Input suhu dalam Celcius
    cout << "PROGRAM KONVERSI SUHU\n\n";
    cout << "Masukan Suhu (Celcius) = ";
    cin >> celcius;

    // Hitung masing-masing konversi langsung dari Celcius
    reamur = celcius * 4 / 5;
    fahrenheit = (celcius * 9 / 5) + 32;
    kelvin = celcius + 273.15;

    // Tampilkan hasil secara benar
    cout << "\nJadi,\n";
    cout << celcius << " derajat celcius = " << fahrenheit << " derajat fahrenheit\n";
    cout << celcius << " derajat celcius = " << reamur << " derajat reamur\n";
    cout << celcius << " derajat celcius = " << kelvin << " derajat kelvin\n";

    cout << "------------------------------------------\n";
    return 0;
}
