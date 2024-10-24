#include <iostream>
#include <string>
using namespace std;

int main() {

	cout << "Nomor Registrasi Pokok Mahasiswa ITS" << endl;

	//FF D P TT J L BB XXXX
	//Fakultas 
	//Departemen
	//Prodi
	//Tahun Masuk
	//Jenjang
	//Jalur Masuk
	//Bidang
	//No Urut

	int a, b, c, d;
	string e, FF, D, P, J, L, BB, XXXX, TT, tahun;

	cout << "\n1.FIA \n2.FTI \n3.FTSLK \n4.FTK \n5.FTIK \n6.FMKSD \n7.FTE \n8.FADP \n9.FBMT \n10.Vokasi \n\nPilih Fakultas : ";
	cin >> a;

	switch (a) {
	case 1:
		FF = "01";
		cout << "\n1.Fisika \n2.Kimia \n3.Biologi \n\nPilih Departemen : ";
		cin >> b;
		break;
	case 2:
		FF = "02";
		cout << "\n1.Teknik Mesin \n2.Teknik Kimia \n3.Teknik Fisika \n4.Teknik Industri \n5.Teknik Material \n\nPilih Departemen : ";
		cin >> b;
		break;
	case 3:
		FF = "03";
		cout << "\n1.Teknik Sipil \n2.Teknik Lingkungan \n3.Teknik Geomatika \n4.Teknik Geofisika \n\nPilih Departemen : ";
		cin >> b;
		break;
	case 4:
		FF = "04";
		cout << "\n1.Teknik Perkapalan \n2.Teknik Sistem Perkapalan \n3.Teknik Kelautan \n4.Teknik Transportasi Laut \n\nPilih Departemen : ";
		cin >> b;
		break;
	case 5:
		FF = "05";
		cout << "\n1.Informatika \n2.Sistem Informasi \n3.Teknologi Informasi \n\nPilih Departemen : ";
		cin >> b;
		break;
	case 6:
		FF = "06";
		cout << "\n1.Matematika \n2.Statistika \n3.Aktuaria \n\nPilih Departemen : ";
		cin >> b;
		break;
	case 7:
		FF = "07";
		cout << "\n1.Teknik Elektro \n2.Teknik Komputer \n3.Teknik Biomedik \n\nPilih Departemen : ";
		cin >> b;
		break;
	case 8:
		FF = "08";
		cout << "\n1.Arsitektur \n2.Perencanaan Wilayah Kota \n3.Desain Produk \n4.Desain Interior \n\nPilih Departemen : ";
		cin >> b;
		break;
	case 9:
		FF = "09";
		cout << "\n1.Manajemen Bisnis \n2.Manajemen Teknologi \n3.Studi Pembangunan \n\nPilih Departemen : ";
		cin >> b;
		break;
	case 10:
		FF = "10";
		cout << "\n1.Teknik Infrastruktur Sipil \n2.Teknik Mesin Industri \n3.Teknik Elektro Otomasi \n4.Teknik Kimia Industri \n5.Teknik Instrumentasi \n6.Statistika Bisnis \n\nPilih Departemen : ";
		cin >> b;
		break;
	}
	switch (b) {
	case 1:
		D = "1";
		break;
	case 2:
		D = "2";
		break;
	case 3:
		D = "3";
		break;
	case 4:
		D = "4";
		break;
	case 5:
		D = "5";
		break;
	case 6:
		D = "6";
		break;
	}

	P = "1";

	cout << "\nTahun Masuk : ";
	cin >> tahun;
	TT = tahun.substr(2, 3);


	cout << "\n1.D-3 \n2.D-4 \n3.S2T \n4.S3T \n5.S-1 \n6.S-2 \n7.S-3 \n8.Profesi \n9.Spesialis \n10.Sub Spesialis \n\nJenjang Pendidikan : ";
	cin >> c;

	switch (c) {
	case 1:
		J = "0";
		cout << "\n0.Reguler \n8.Matrikulasi \n\nJalur Masuk : ";
		cin >> d;
		switch (d) {
		case 0:
			L = "0";
			break;
		case 1:
			L = "1";
			break;
		case 5:
			L = "5";
			break;
		case 6:
			L = "6";
			break;
		case 8:
			L = "8";
			break;
		}
		if (D == "2" or D == "3") {
			cout << "\nApakah Kerjasama dengan Disnaker ? (Ya/Tidak) ";
			cin >> e;
			if (e == "Ya") {
				BB = "01";
			}
			else {
				BB == "02"; //BB yg tidak diketahui dibuat 02
			}
		}
		else {
			BB == "02";
		}
		break;
	case 2:
		J = "1";
		cout << "\n0.Reguler \n5.LJ Gasal \n6.LJ Genap \n8.Matrikulasi \n\nJalur Masuk : ";
		cin >> d;
		switch (d) {
		case 0:
			L = "0";
			break;
		case 1:
			L = "1";
			break;
		case 5:
			L = "5";
			break;
		case 6:
			L = "6";
			break;
		case 8:
			L = "8";
			break;
		}
		BB = "00";
		break;
	case 3:
		J = "2";
		L = "0";  //Selain S-1, S-2, D-3, D-4, L = 0
		BB == "02";
		break;
	case 4:
		J = "3";
		L = "0";
		BB = "02";
		break;
	case 5:
		J = "4";
		cout << "\n0.Reguler \n1.Joint Degree \n5.LJ Gasal \n6.LJ Genap \n8.Matrikulasi \n\nJalur Masuk : ";
		cin >> d;
		switch (d) {
		case 0:
			L = "0";
			break;
		case 1:
			L = "1";
			break;
		case 5:
			L = "5";
			break;
		case 6:
			L = "6";
			break;
		case 8:
			L = "8";
			break;
		}
		break;
		BB = "00";
	case 6:
		J = "5";
		cout << "\n0.Reguler \n8.Pra Pasca \n\nJalur Masuk : ";
		cin >> d;
		switch (d) {
		case 0:
			L = "0";
			break;
		case 1:
			L = "1";
			break;
		case 5:
			L = "5";
			break;
		case 6:
			L = "6";
			break;
		case 8:
			L = "8";
			break;
		}
		BB = "02";
		break;
	case 7:
		J = "6";
		L = "0";
		BB = "02";
		break;
	case 8:
		J = "7";
		L = "0";
		BB = "02";
		break;
	case 9:
		J = "8";
		L = "0";
		BB = "02";
		break;
	case 10:
		J = "9";
		L = "0";
		BB = "02";
		break;
	}


	cout << "\nMasukkan No. Urut : ";
	cin >> XXXX;


	cout << "\nNRP = " << FF << D << P << TT << J << L << BB << XXXX;

	return 0;
}