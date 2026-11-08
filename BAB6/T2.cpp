
#include <iostream>
using namespace std;

int main() {
    int jumlah;
    int i = 1;
    int total = 0;

    cout << "##  MOH AZIZ ADKHANUDDIN - 2618025 ##" << endl;
    cout << "========================================" << endl;
    cout << "## Program C++ Penjumlahan Deret ##" << endl;
    cout << "========================================" << endl;

    cout << "\nJumlah deret yang diinginkan: ";
    cin >> jumlah;

    while (i <= jumlah) {
        total += i;

        cout << i;

        if (i < jumlah) {
            cout << " + ";
        }

        i++;
    }

    cout << " = " << total << endl;

    return 0;
}

