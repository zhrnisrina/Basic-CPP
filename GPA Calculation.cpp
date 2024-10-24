#include <iostream>
using namespace std;

int main() {

	cout << "Indeks Prestasi Semester \n" << endl;

	string a, b, c, d, e, f, g, h, i, j, k, l;
	float IP_PMS, IP_PTE, IP_FIS, IP_KIM, IP_MAT, IP_ENG, IPS;

	cout << "Masukkan Mata Kuliah (PMS, PTE, Fisika, Kimia, Matematika, Inggris" << endl;
	
	cout << "\nMata Kuliah 1 : ";
	cin >> g;
	if (g == "PMS") {
		cout << "Nilai PMS : ";
		cin >> a;
	}
	else if (g == "PTE") {
		cout << "Nilai PTE : ";
		cin >> b;
	}
	else if (g == "Fisika") {
		cout << "Nilai Fisika : ";
		cin >> c;
	}
	else if (g == "Kimia") {
		cout << "Nilai Kimia : ";
		cin >> d;
	}
	else if (g == "Matematika") {
		cout << "Nilai Matematika : ";
		cin >> e;
	}
	else if (g == "Inggris") {
		cout << "Nilai Bahasa Inggris : ";
		cin >> f;
	}
	cout << "\n Mata Kuliah 2 : ";
	cin >> h;
	if (h == "PMS") {
		cout << "\nNilai PMS : ";
		cin >> a;
	}
	else if (h == "PTE") {
		cout << "Nilai PTE : ";
		cin >> b;
	}
	else if (h == "Fisika") {
		cout << "Nilai Fisika : ";
		cin >> c;
	}
	else if (h == "Kimia") {
		cout << "Nilai Kimia : ";
		cin >> d;
	}
	else if (h == "Matematika") {
		cout << "Nilai Matematika : ";
		cin >> e;
	}
	else if (h == "Inggris") {
		cout << "Nilai Bahasa Inggris : ";
		cin >> f;
	}
	cout << "\n Mata Kuliah 3 : ";
	cin >> i;
	if (i == "PMS") {
		cout << "\nNilai PMS : ";
		cin >> a;
	}
	else if (i == "PTE") {
		cout << "Nilai PTE : ";
		cin >> b;
	}
	else if (i == "Fisika") {
		cout << "Nilai Fisika : ";
		cin >> c;
	}
	else if (i == "Kimia") {
		cout << "Nilai Kimia : ";
		cin >> d;
	}
	else if (i == "Matematika") {
		cout << "Nilai Matematika : ";
		cin >> e;
	}
	else if (i == "Inggris") {
		cout << "Nilai Bahasa Inggris : ";
		cin >> f;
	}
	cout << "\n Mata Kuliah 4 : ";
	cin >> j;
	if (j == "PMS") {
		cout << "\nNilai PMS : ";
		cin >> a;
	}
	else if (j == "PTE") {
		cout << "Nilai PTE : ";
		cin >> b;
	}
	else if (j == "Fisika") {
		cout << "Nilai Fisika : ";
		cin >> c;
	}
	else if (j == "Kimia") {
		cout << "Nilai Kimia : ";
		cin >> d;
	}
	else if (j == "Matematika") {
		cout << "Nilai Matematika : ";
		cin >> e;
	}
	else if (j == "Inggris") {
		cout << "Nilai Bahasa Inggris : ";
		cin >> f;
	}
	cout << "\n Mata Kuliah 5 : ";
	cin >> k;
	if (k == "PMS") {
		cout << "\nNilai PMS : ";
		cin >> a;
	}
	else if (k == "PTE") {
		cout << "Nilai PTE : ";
		cin >> b;
	}
	else if (k == "Fisika") {
		cout << "Nilai Fisika : ";
		cin >> c;
	}
	else if (k == "Kimia") {
		cout << "Nilai Kimia : ";
		cin >> d;
	}
	else if (k == "Matematika") {
		cout << "Nilai Matematika : ";
		cin >> e;
	}
	else if (k == "Inggris") {
		cout << "Nilai Bahasa Inggris : ";
		cin >> f;
	}
	cout << "\n Mata Kuliah 6 : ";
	cin >> l;
	if (l == "PMS") {
		cout << "\nNilai PMS : ";
		cin >> a;
	}
	else if (l == "PTE") {
		cout << "Nilai PTE : ";
		cin >> b;
	}
	else if (l == "Fisika") {
		cout << "Nilai Fisika : ";
		cin >> c;
	}
	else if (l == "Kimia") {
		cout << "Nilai Kimia : ";
		cin >> d;
	}
	else if (l == "Matematika") {
		cout << "Nilai Matematika : ";
		cin >> e;
	}
	else if (l == "Inggris") {
		cout << "Nilai Bahasa Inggris : ";
		cin >> f;
	}

	if (a == "A") {
		IP_PMS = 3 * 4;
	}
	else if (a == "AB") {
		IP_PMS = 3 * 3.5;
	}
	else if (a == "B") {
		IP_PMS = 3 * 3;
	}
	else if (a == "BC") {
		IP_PMS = 3 * 2.5;
	}
	else if (a == "C") {
		IP_PMS = 3 * 2;
	}
	else if (a == "D") {
		IP_PMS = 3 * 1;
	}
	else if (a == "E") {
		IP_PMS = 3 * 0;
	}
	cout << "\n IP PMS = " << IP_PMS << endl;

	if (b == "A") {
		IP_PTE = 4 * 4;
	}
	else if (b == "AB") {
		IP_PTE = 4 * 3.5;
	}
	else if (b == "B") {
		IP_PTE = 4 * 3;
	}
	else if (b == "BC") {
		IP_PTE = 4 * 2.5;
	}
	else if (b == "C") {
		IP_PTE = 4 * 2;
	}
	else if (b == "D") {
		IP_PTE = 4 * 1;
	}
	else if (b == "E") {
		IP_PTE = 4 * 0;
	}
	cout << "\n IP PTE = " << IP_PTE << endl;

	if (c == "A") {
		IP_FIS = 4 * 4;
	}
	else if (c == "AB") {
		IP_FIS = 4 * 3.5;
	}
	else if (c == "B") {
		IP_FIS = 4 * 3;
	}
	else if (c == "BC") {
		IP_FIS = 4 * 2.5;
	}
	else if (c == "C") {
		IP_FIS = 4 * 2;
	}
	else if (c == "D") {
		IP_FIS = 4 * 1;
	}
	else if (c == "E") {
		IP_FIS = 4 * 0;
	}
	cout << "\n IP Fisika 1 = " << IP_FIS << endl;


	if (d == "A") {
		IP_KIM = 3 * 4;
	}
	else if (d == "AB") {
		IP_KIM = 3 * 3.5;
	}
	else if (d == "B") {
		IP_KIM = 3 * 3;
	}
	else if (d == "BC") {
		IP_KIM = 3 * 2.5;
	}
	else if (d == "C") {
		IP_KIM = 3 * 2;
	}
	else if (d == "D") {
		IP_KIM = 3 * 1;
	}
	else if (d == "E") {
		IP_KIM = 3 * 0;
	}
	cout << "\n IP Kimia 1 = " << IP_KIM << endl;

	if (e == "A") {
		IP_MAT = 3 * 4;
	}
	else if (e == "AB") {
		IP_MAT = 3 * 3.5;
	}
	else if (e == "B") {
		IP_MAT = 3 * 3;
	}
	else if (e == "BC") {
		IP_MAT = 3 * 2.5;
	}
	else if (e == "C") {
		IP_MAT = 3 * 2;
	}
	else if (e == "D") {
		IP_MAT = 3 * 1;
	}
	else if (e == "E") {
		IP_MAT = 3 * 0;
	}
	cout << "\n IP MAT = " << IP_MAT << endl;


	if (f == "A") {
		IP_ENG = 2 * 4;
	}
	else if (f == "AB") {
		IP_ENG = 2 * 3.5;
	}
	else if (f == "B") {
		IP_ENG = 2 * 3;
	}
	else if (f == "BC") {
		IP_ENG = 2 * 2.5;
	}
	else if (f == "C") {
		IP_ENG = 2 * 2;
	}
	else if (f == "D") {
		IP_ENG = 2 * 1;
	}
	else if (f == "E") {
		IP_ENG = 2 * 0;
	}
	cout << "\n IP Bahasa Inggris = " << IP_ENG << endl;

	IPS = (IP_PMS + IP_PTE + IP_MAT + IP_FIS + IP_KIM + IP_ENG) / 19;

	cout << "\n IPS = " << IPS << endl;

	return 0;
}