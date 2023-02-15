#include <iostream>
#include <math.h>
using namespace std;
int main () {
	int tien, ngay;
	char loai;
	cout << "Nhap so ngay thue: ";
	cin >> ngay;
	cout << "Nhap loai phong: ";
	cin >> loai;
	
	const int loaiA=250000;
	const int loaiB=200000;
	const int loaiC=150000;
	
	if (loai=='A') {
		tien=loaiA*ngay;
		if (ngay>12) {
			tien=tien-(tien*0.1);
		}
	}
	else if (loai=='B') {
		tien=loaiB*ngay;
		if (ngay>12) {
			tien=tien-(tien*0.08);
		}
	}
	else if (loai=='C') {
		tien=loaiC*ngay;
		if (ngay>12) {
			tien=tien-(tien*0.08);
		}
	}
	cout << "So tien phai tra: " << tien;
}