#include <iostream>
using namespace std;

int main() {

	cout << "Program Hasil Penjumlahan Faktorial\n" << endl;

	int s, i, a;

	cout << "Masukkan jumlah deret : ";
	cin >> a;

	s = 1;

	for (i = 1; i <= a; i++) {
		s = s*i;

	}
	cout << "Hasil Penjumlahan faktorial : " << s << endl;

	return 0;



	return 0;
}

/*
int main() {

	cout << "Program Hasil Penjumlahan Bilangan Deret\n" << endl;

	int s, i, a;

	cout << "Masukkan jumlah deret : ";
	cin >> a;

	s = 0;

	for (i = 1; i <= a; i++) {
		s = s + i;
		
	}
		cout << "Hasil Penjumlahan deret : " << s << endl;

	return 0;
}
*/

/*

int main() {

	cout << "Program Bilangan Deret\n " << endl;

	int i, a, Hasil, angka1 = 0, angka2 = 1; 

	cout << "Masukkan jumlah deret : ";
	cin >> a;

	cout << "1,";

	for (i = 1; i < a; i++) {
		Hasil = angka1 + angka2;
		angka2 = angka1;
		angka1 = Hasil;

		cout << Hasil << ",";

	}

	return 0;
}
*/