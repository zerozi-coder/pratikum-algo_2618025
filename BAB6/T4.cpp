
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "===== MOH AZIZ ADKHANUDDIN - 2618025 =====" << endl;

    cout << "\nMasukkan jumlah angka: ";
    cin >> n;

    cout << "\n=== Deret Campur Logika ===" << endl;

    for (int i = 1; i <= n; i++) {

        if (i % 2 == 0) {
            cout << i * 2;
        }
        else if (i % 3 == 0) {
            cout << i + 3;
        }
        else {
            cout << i;
        }

        cout << " ";
    }

    cout << endl;

    return 0;
}

