#include <iostream>
using namespace std;

int main() {
    cout << "2618025 || Moh Aziz Adkhanuddin" << endl;
    cout << "TUGAS BAB 7" << endl;
    cout << "=====================================" << endl;

    // Ketentuan: ambil 1 angka paling belakang NIM,
    // NIM berakhiran ganjil -> +5, genap -> +4
    // Contoh: NIM berakhiran 1 -> 1 + 5 = 6, NIM berakhiran 2 -> 2 + 4 = 6

    // ===== 1a. Kotak Angka Diagonal (Nested For + IF i==j) =====
    int n1;
    cout << "1. Membuat Kotak Angka Diagonal" << endl;
    cout << "   Masukkan ukuran kotak: ";
    cin >> n1;
    cout << endl;

    for (int i = 1; i <= n1; i++) {
        for (int j = 1; j <= n1; j++) {
            if (i == j) {
                cout << 1 << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    cout << endl;

    // ===== 1b. Segitiga Terbalik Genap (Nested While, += 2) =====
    int n2;
    cout << "2. Membuat Segitiga Terbalik Genap" << endl;
    cout << "   Masukkan ukuran segitiga: ";
    cin >> n2;
    cout << endl;

    int i = 1;
    while (i <= n2) {
        int j = 1;
        int angka = 2;
        while (j <= n2 - i + 1) {
            cout << angka << " ";
            angka += 2;
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;

    // ===== 1c. Segitiga Siku-siku Huruf (Nested Do-While) =====
    int n3;
    cout << "3. Membuat Segitiga Siku-siku Huruf" << endl;
    cout << "   Masukkan ukuran segitiga siku-siku: ";
    cin >> n3;
    cout << endl;

    int a = 1;
    do {
        int b = 1;
        do {
            cout << (char)('A' + b - 1) << " ";
            b++;
        } while (b <= a);
        cout << endl;
        a++;
    } while (a <= n3);

    return 0;
}
