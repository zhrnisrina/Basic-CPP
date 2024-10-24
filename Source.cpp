#include <iostream>
#include <math.h>
using namespace std;


int main() {

	cout << "MATRIKS VARIANS KOVARIANS\n" << endl;

	int n, i, j{}, k, a;
	float X[100], Y[100], Z[100], S[100][100], T[100][100], C[100][100], x, y, z, Sx, Sy, Sz, Mx, My, Mz, meanx, meany, meanz, standevx, standevy, standevz;

	cout << "Jumlah Data : ";
	cin >> n;
	cout << endl;

	for (i = 1; i <= n; i++) {

		cout << "X - " << i << " : ";
		cin >> X[i];
		cout << "Y - " << i << " : ";
		cin >> Y[i];
		cout << "Z - " << i << " : ";
		cin >> Z[i];
	}

	x = 0;
	y = 0;
	z = 0;
	for (i = 1; i <= n; i++) {

		x = x + X[i];
		y += Y[i];
		z += Z[i];
	}

	meanx = x / n;
	meany = y / n;
	meanz = z / n;

	cout << endl;
	cout << "Matriks S : \n" << endl;

	for (i = 1; i <= n; i++) {

		S[i][1] = X[i] - meanx;
		S[i][2] = Y[i] - meany;
		S[i][3] = Z[i] - meanz;
	}

	for (i = 1; i <= n; i++) {

		cout << S[i][1] << "  " << S[i][2] << "  " << S[i][3] << endl;
	}

	cout << "\nMatriks S' : \n" << endl;

	T[i][j] = 0;
	for (i = 1; i <= n; i++) {

		T[i][1] = S[1][i];
		T[i][2] = S[2][i];
		T[i][3] = S[3][i];
	}

	for (i = 1; i <= n; i++) {

		cout << T[i][1] << "  " << T[i][2] << "  " << T[i][3] << "  " << endl;

	}

	C[i][j] = 0;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= 3; j++) {
			for (k = 1; k <= n; k++) {
				C[i][j] = C[i][j] + (S[i][k] * T[k][j]);
			}
		}
	}

	a = n - 1;

	cout << "\nMatriks Varians Kovarians : \n" << endl;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= 3; j++) {
			cout << (1 / a) * C[i][j] << "  ";
		}
		cout << endl;
	}

	cout << "\n\nSTATISTIKA DESKRIPTIF\n" << endl;


	Sx = 0;
	Sy = 0;
	Sz = 0;
	for (i = 1; i <= n; i++) {

		Sx += pow((X[i] - meanx), 2);
		Sy += pow((Y[i] - meany), 2);
		Sz += pow((Z[i] - meanz), 2);
	}

	standevx = sqrt(Sx / (n - 1));
	standevy = sqrt(Sy / (n - 1));
	standevz = sqrt(Sz / (n - 1));

	int s;
	s = 0;

	for (i = 1; i <= n; i++) {
		for (j = i + 1; j <= n; j++) {
			if (X[i] > X[j]) {
				s = X[i];
				X[i] = X[j];
				X[j] = s;
			}
		}
	}

	if (n % 2 == 0) {
		Mx = (X[n / 2] + X[n / 2 + 1]) / 2;

	}
	else {
		Mx = X[(n + 1) / 2];
	}

	for (i = 1; i <= n; i++) {
		for (j = i + 1; j <= n; j++) {
			if (Y[i] > Y[j]) {
				s = Y[i];
				Y[i] = Y[j];
				Y[j] = s;
			}
		}
	}

	if (n % 2 == 0) {
		My = (Y[n / 2] + Y[n / 2 + 1]) / 2;

	}
	else {
		My = Y[(n + 1) / 2];
	}

	for (i = 1; i <= n; i++) {
		for (j = i + 1; j <= n; j++) {
			if (Z[i] > Z[j]) {
				s = Z[i];
				Z[i] = Z[j];
				Z[j] = s;
			}
		}
	}

	if (n % 2 == 0) {
		Mz = (Z[n / 2] + Z[n / 2 + 1]) / 2;

	}
	else {
		Mz = Z[(n + 1) / 2];
	}


	cout << meanx << "  " << meany << "  " << meanz << endl;
	cout << standevx << "  " << standevy << "  " << standevz << endl;
	cout << Mx << "  " << My << "  " << Mz << endl;
}

	/*
	for (i = 1; i <= n; i++) {

		cout << X[i] - meanX << "  " << Y[i] - meanY << "  " << Z[i] - meanZ << endl;
	}

	cout << "\nMatriks S' : " << endl;

	for (i = 1; i <= n; i++) {

		cout << X[i] - meanX << "  ";
	}
	cout << endl;
	for (i = 1; i <= n; i++) {

		cout << Y[i] - meanY << "  ";
	}
	cout << endl;
	for (i = 1; i <= n; i++) {

		cout << Z[i] - meanZ << "  ";
	}
	cout << "\n\n" << endl;

	//S*S'
*/
	
//}

/*
int main() {

	cout << "MATRIKS\n" << endl;

	int b, c, i, j, k, x[100][100], y[100][100];
	//string o;

	cout << "Jumlah baris : ";
	cin >> b;
	cout << "Jumlah Kolom : ";
	cin >> c;

	cout << endl;

	for (i = 1; i <= b; i++) {
		for (j = 1; j <= c; j++) {

			cout << "x[" << i << "][" << j << "] : ";
			cin >> x[i][j];
		}
	}
	cout << endl;

	for (i = 1; i <= b; i++) {
		for (j = 1; j <= c; j++) {

			cout << x[i][j] << " ";
		}
		cout << endl;
	}

	int d, e, f[100][100];

	cout << "\ndikalii\n" << endl;

	cout << "Jumlah baris : ";
	cin >> d;
	cout << "Jumlah Kolom : ";
	cin >> e;

	cout << endl;

	for (i = 1; i <= d; i++) {
		for (j = 1; j <= e; j++) {

			cout << "y[" << i << "][" << j << "] : ";
			cin >> y[i][j];
		}
	}
	cout << endl;

	for (i = 1; i <= d; i++) {
		for (j = 1; j <= e; j++) {

			cout << y[i][j] << " ";
		}
		cout << endl;
	}


	f[i][j] = 0;
	for (i = 1; i <= b; i++) {
		for (j = 1; j <= e; j++) {
			for (k = 1; k <= c; k++) {
				f[i][j] = f[i][j] + (x[i][k] * y[k][j]);
	//			f[i][j] = f[i][j];
			}
		}
	}
	cout << endl;
	cout << "Hasil Perkalian : \n" << endl;

	for (i = 1; i <= b; i++) {
		for (j = 1; j <= e; j++) {
			cout << f[i][j] << " ";
		}
		cout << endl;
	}
}
*/
	/*
	cout << "\nPenjumlahan (+) / Pengurangan (-) ? ";
	cin >> o;
	cout << endl;


	for (i = 1; i <= b; i++) {
		for (j = 1; j <= c; j++) {

			cout << "y[" << i << "][" << j << "] : ";
			cin >> y[i][j];
		}
	}
	cout << endl;

	for (i = 1; i <= b; i++) {
		for (j = 1; j <= c; j++) {

			cout << y[i][j] << " ";
		}
		cout << endl;
	}

	cout << "\nsama dengann\n" << endl;

	for (i = 1; i <= b; i++) {
		for (j = 1; j <= c; j++) {
			if (o == "+") {
				cout << x[i][j] + y[i][j] << " ";
			}
			else {
				cout << x[i][j] - y[i][j] << " ";
			}
		}
		cout << endl;
	}
	
}
*/
/*

int main() {

	cout << "MATRIKS\n" << endl;

	int a, i, j, x[100][100];

	for (i = 0; i <= 2; i++) {
		for (j = 0; j <= 2; j++) {

			cout << "Masukkan x[" << i << "][" << j << "] : ";
			cin >> x[i][j];
		}
	}
	cout << endl;

	for (i = 0; i < 1; i++) {
		for (j = 0; j <= 2; j++) {

			cout << x[i][j] << " ";
		}
	}
	cout << endl;
	for (i = 1; i < 2; i++) {
		for (j = 0; j <= 2; j++) {

			cout << x[i][j] << " ";
		}
	}
	cout << endl;
	for (i = 2; i < 3; i++) {
		for (j = 0; j <= 2; j++) {

			cout << x[i][j] << " ";
		}
	}
	cout << endl;
}
*/
/*
int main() {

	int s, i, j, n, q;
	float a, median, Q1, Q3, x[100], ave;

	cout << "Mau berapa jumlah data ? ";
	cin >> n;
	cout << endl;

	for (i = 1; i <= n; i++) {
		cout << "Masukkan data ke-" << i << ": ";
		cin >> x[i];
	}

	s = 0;

	for (i = 1; i <= n; i++) {
		for (j = i + 1; j <= n; j++) {
			if (x[i] > x[j]) {
				s = x[i];
				x[i] = x[j];
				x[j] = s;
			}
		}
	}
	cout << "\nUrutan data : ";
	for (i = 1; i <= n; i++) {
		cout << x[i] << " ";
	}


	cout << endl;

	cout << "\nMedian : ";
	if (n % 2 == 0) {
		median = (x[n / 2] + x[n / 2 + 1])/2;
		
	}
	else {
		median = x[(n + 1) / 2];
	}
	cout << median << endl;

	q = 0;
	for (i = 1; i <= n; i++) {
		q = q + x[i];
	}

	ave = q / n;

	cout << "Rata-Rata : " << ave << endl;
	Q1 = x[n/4];
	cout << "Kuartil 1 : " << Q1 << endl;
	Q3 = x[n * 3 / 4];
	cout << "Kuartil 3 : " << Q3 << endl;

}
*/
/*
int main() {

	int  i, s, n, x[100];
	float m, v, var, standev;

	cout << "Mau berapa jumlah data ? ";
	cin >> n;
	cout << endl;
	

	s = 0;
	v = 0;
	for (i = 1; i <= n; i++) {

		cout << "Masukkan data ke-" << i << ": ";
		cin >> x[i];
		
		s = s + x[i];
	}
	cout << endl;

	m = s / n;

	for (i = 1; i <= n; i++) {
		v = v + pow((x[i] - m), 2);
	}
	var = v / (n - 1);
	standev = sqrt(var);
	cout << "varians : " << var << endl;
	cout << "standev : " << standev << endl;

}
*/
/*
int main() {

	int x[10] = { 2,4,6,8,1,3,5,7,9,0 };
	cout << x[2];
	
	}
*/
/*
int main() {

	int i, x[5];

	for (i = 1; i <= 5; i++) {

		cout << "Masukkan data ke-" << i << ":";
		cin >> x[i];
	}
	for (i = 1; i <= 5; i++) {

		cout << "Hasil input data ke-" << i << ":" << x[i] << endl;
	}

}
*/
/*
int main() {

	int i, j, k;

	for (i = 10; i >= 1 ; i--) {
		cout << i*10 << " ";
		for (j = i; j >= 1; j--) {

			cout << j << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (k = 1; k <= 10; k++) {

		cout << k << " ";
	}
		return 0;
	
}
*/
/*
int main() {

	int i, j;

	for (i = 10; i >= 1; i--) {

		cout << i << " ";

	}
	cout << endl;
	for (i = 10; i <= 100; i+=10) {
		cout << i << " ";
		for (j = 1; j <= i/10; j++) {

			cout << j << " ";
		}
		cout << endl;
	}


}
*/
/*
int main() {

	cout << "Program Deret" << endl;

	int i, a, b; 

	cout << "\nMasukkan jumlah deret : ";
	cin >> a;

	b = 1; 
	for (i = 1; i <= a; i++) {

		b = b * (-3);

		cout << b << ", ";
	}

	cout << endl;

}
*/
/*
int main () {

	cout << "Program Deret" << endl;

	int a, i;
	float o, p{}, s;

	cout << "\nMasukkan jumlah deret : ";
	cin >> a;

	s = 0;
	for (i = 1; i <= a; i++) {

		s = s + i;
		o = 1 / s;
		printf("%.3f", o);
		//cout << setprecision(3);
		//cout << fixed;
	
		cout << ", ";
		p += o;
	}

	cout << "\n\nJumlah dari deret : " << p << endl;

	return 0;
}
*/
/*
int main() {

	int i, j;

	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			cout << j << " ";
		}
		cout << endl;
	}

}
*/
/*
int main() {

	int i, j;

	for (i = 5; i >= 1; i--) {
		for (j = 5; j >= 1; j--) {
			cout << j << " ";
		}
		cout << endl;
	}
*/
/*
	int main() {

		int i, j;

		for (i = 1; i <= 5; i++) {
			for (j = 1; j <= i; j++) {
				cout << i << " ";
			}
			cout << endl;
		}

	}
*/

/*
int main() {

	int a, i, j;

	cout << "Masukkan angka : ";
	cin >> a;

	for (i = 1; i <= a; i++) {
		for (j = 2; j <= i; j++) {
			cout << "  ";
		} {
			cout << i << endl;
		}
	}
}
*/
/*
int main() {

	int total = 0;
	for (int i = 10; i >=9; total += 3, i--) {
		cout << i << " || " << total << endl;
	}
}
*/
/*
int main() {

	cout << "Program Bilangan Deret\n " << endl;

	int i, a, Hasil, angka1 = 0, angka2 = 1;

	cout << "Masukkan jumlah deret : ";
	cin >> a;

	for (i = 1; i <= a; i++) {
		Hasil = angka1 + angka2;
		angka2 = angka1;
		angka1 = Hasil;
		
		cout << Hasil << ",";

	}

	return 0;
}
*/
/*
int main() {

	int i, s, n, k, t, a, b;
	float kombinasi;

	cout << "KOMBINASI" << endl;

	cout << "n : ";
	cin >> n;
	cout << "k : ";
	cin >> k;

	a = n - k;

	s = 1;
	for (i = 1; i <= n; i++) {
		s = s * i;
	}
	t = 1; 
	for (i = 1; i <= k; i++) {
		t = t * i;
	}
	
	b = 1; 
	for (i = 1; i <= a; i++) {
		b = b * i;
	}

	kombinasi = s / (t*b);

	cout << "Kombinasi : " << kombinasi << endl;


}
*/
/*
int main() {

	int i, s, n;
	float rata; 

	cout << "Jumlah Deret : ";
	cin >> n;

	s = 0;
	for (i = 1; i <= n; i++) {
		s = s + i;
	}
	cout << "Jumlah " << n << " deret : " << s;

	rata = s / n;

	cout << "\nRata-Rata : " << rata << endl;
}
*/
/*
int main() {

	int i, a;

	for (i = 2; i <= 100; i = i + 2) {
		cout << i << " ";
	}


	return 0;
}
*/
/*
int main() {
	int i;
	i = 2;
	while (i <= 100) {
		cout << i << " ";
		i = i + 2;
	}

}
*/
/*
int main() {

	int i, a;

	for (i = 1; i <= 100; i = i + 2) {
		cout << i << " ";
	}


	return 0;
}
*/
/*
int main() {

	int i;
	i = 1;
	while (i <= 100) {
		cout << i << " ";
		i = i + 2;
	}

}
/
/*
int main() {

	char i, a;

	for (i = 'j'; i >= 'a'; i--) {
		cout << i << " ";
	}


	return 0;
}
*/
/*
int main() {

	char i;
	i = 'j';
	while (i >= 'a') {
		cout << i << " ";
		i--;
	}

}
*/
/*
int main() {

	char i, a;

	for (i = 'a'; i <= 'j'; i++) {
		cout << i << " ";
	}


	return 0;
}
*/
/*
int main() {

	char i;
	i = 'a';
	while (i <= 'j') {
		cout << i << " ";
		i++;
	}

}
*/
/*
int main() {

	int i;

	for (i = 10; i >= 1; i--) {
		cout << i << " ";
	}


	return 0;
}
*/
/*
int main() {

	int i;
	i = 10;
	while (i >= 1) {
		cout << i << " ";
		i--;
	}

}
*/
/*
int main() {

	int i;

	for (i = 1; i <= 10; i++) {
		cout << i << " ";
	}


	return 0;
}
*/
/*
int main() {

	int i;
	i = 1;
	while (i <= 10) {
		cout << i << " ";
		i++;
	}

}
*/
/*
int main() {

	int i;
	i = 1;
	do {
		cout << i << " ";
		i++;
	} 	while (i <= 10);
}
*/
