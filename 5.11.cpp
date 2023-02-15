#include <iostream>
#include <math.h>
using namespace std;
int main () {
	int tien, gio, thoigian;
	cout << "Nhap vao so gio khi bat dau truy cap: ";
	cin >>gio;
	cout << "Nhap vao thoi gian truy cap: ";
	cin >> thoigian;
	if (gio > 7 && gio <= 17) {
		tien=thoigian*(400*60);
		if (thoigian>6) {
			tien=tien-(tien*0.1);
		}
	}
	else if (gio>17 && gio <= 24) {
		tien=thoigian*(350*60);
		if(thoigian>4) {
			tien=tien-(tien*0.12);
		}
	}
	else if (gio>=0 && gio <=7) {
		tien=thoigian*(300*60);
		if(thoigian>7) {
			tien=tien-(tien*0.15);
		}
	}
	cout << "Gia tien phai tra: " << tien;
}