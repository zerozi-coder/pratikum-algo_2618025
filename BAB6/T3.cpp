
#include <iostream>
using namespace std;

int main() {
    int level = 1;
    int jawaban;
    int hasil;

    cout << "===== MOH AZIZ ADKHANUDDIN - 2618025 =====" << endl;
    cout << "===== PROGRAM GAME MATEMATIKA =====" << endl;

    do {
        hasil = level + (level * 5);

        cout << "\nLevel " << level << endl;
        cout << "Berapa hasil dari " << level
             << " + " << level * 5 << "? ";
        cin >> jawaban;

        if (jawaban == hasil) {
            cout << "Benar! Naik level!" << endl;
            level++;
        } else {
            cout << "Salah! Game Over!" << endl;
            break;
        }

    } while (level <= 6);

    if (level == 7) {
        cout << "\nSelamat! Kamu menyelesaikan semua level!" << endl;
    }

    return 0;
}

