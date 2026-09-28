//#include <iostream>
//using namespace std;
//int main() {
//	cout << "Pratikum Algoritma dan pemograman" << endl;
//	cout << "input NIM anda"; 
//	cin >> x;
//	cout << "NIM anda adalah :" << x;
//	
//return 0;
//}

#include <iostream>
#include <string> 
using namespace std;

int main() {
	const float phi = 3.14;
	float r, luas, keliling;
	
    string x; // Deklarasi variabel x sebelum digunakan
    cout << "======================================" << endl;
    cout << "KALKULATOR LUAS & KELILING LINGKARAN" << endl;
    cout << "======================================" << endl;
    
    cout << "Masukan Jari-Jari lingkaran (r):"; 
    cin >> r;
    
    luas = phi * r * r;
    keliling = 2 * phi * r;
    
    cout << "Hasil Perhitungan" << endl;
    cout << "luas lingkaran = " << luas << endl;
    cout << "keliling lingkaran = " << keliling;
    
    return 0;
}

//#include <iostream>
//using namespace std;
//const int l = 6; //inisialisasi
//const int b = 7;
//
//int main () {
//	cout << "a * a = " << a * a;
//	return 0;
//}



//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main () {
//	int panjangteks;
//	char kata[20];
//	
//	cout << "masukan kata = ";
//	cin >> kata;
//	
//	panjangteks = strlen(kata);
//	
//	cout << "\nPanjang kata " << " adalah = "
//		 << panjangteks;
//	
//	return 0;
//}
