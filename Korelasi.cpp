#include <iostream>
using namespace std;

int main() {

	int s, v, n, i, x[100], y[100];
	float meanx, meany, Sxx, Syy, Sxy, korelasi;

	cout << "Korelasi Berat Badan dan Kecepatan Lari" << endl;

	cout << "\nMasukkan Jumlah Data : ";
	cin >> n;
	cout << endl; 

	for (i = 1; i <= n; i++){

			cout << "Berat Badan	(kg)  ke-" << i << " : ";
			cin >> x[i];
			cout << "Kecepatan Lari (m/s)  ke-" << i << " : ";
			cin >> y[i];
		
	}

	cout << "\n\n| Berat Badan | Kecepatan Lari |" << endl;
	cout << "--------------------------------" << endl;

	for (i = 1; i <= n; i++) {
		cout << "|     " << x[i] << "      |        " << y[i] << "      |" << endl;
		
	}
	
	s = 0;
	v = 0;
	for (i = 1; i <= n; i++) {
		s = s + x[i];
		v = v + y[i];
	}

	meanx = s / n;
	meany = v / n;

	cout << "\n\nTotal Berat Badan : " << s << endl;
	cout << "Total Kecepatan Berlari : " << v << endl;

	Sxx = 0;
	Syy = 0;
	Sxy = 0;
	for (i = 1; i <= n; i++) {
		Sxx = Sxx + pow((x[i] - meanx), 2);
		Syy = Syy + pow((y[i] - meany), 2);
		Sxy = Sxy + ((x[i] - meanx) * (y[i] - meany));
	}

	cout << "\nSxx : " << Sxx << endl;
	cout << "Syy : " << Syy << endl;
	cout << "Sxy : " << Sxy << endl;

	korelasi = Sxy / sqrt(Sxx*Syy);
	cout << "\nNilai Korelasi : " << korelasi << endl;

	return 0;
}
