#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    long long nim;
    int nilai;

    cout << "=== PROGRAM PENENTUAN GRADE NILAI ===" << endl;
    cout << "Masukkan Nama : ";
    getline(cin, nama);
    cout << "Masukkan NIM  : ";
    cin >> nim;
    cout << "Masukkan Nilai (0-100): ";
    cin >> nilai;

    cout << "\n----------------------------------------" << endl;
    cout << "Nama : " << nama << endl;
    cout << "NIM  : " << nim << endl;
    cout << "Nilai: " << nilai << endl;

    if (nilai < 0 || nilai > 100) {
        cout << "Grade: Nilai tidak valid" << endl;
    } else {
        switch (nilai / 10) {
            case 10:
            case 9:
                cout << "Grade: A" << endl;
                break;
            case 8:
                cout << "Grade: B" << endl;
                break;
            case 7:
                cout << "Grade: C" << endl;
                break;
            case 6:
                cout << "Grade: D" << endl;
                break;
            default:
                cout << "Grade: E" << endl;
                break;
        }
    }

    return 0;
}

