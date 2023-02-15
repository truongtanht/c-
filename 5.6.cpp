#include <iostream>
#include <math.h>
using namespace std;
int main () {
	int tien, km;
	cout << "Nhap vao so km: ";
	cin >> km;
	if (km>=0 && km<=1) {
		tien=5000;
	}
	else if (km>=2 && km <=5) {
		tien=1*5000+(km-1)*4500;
	}
	else if (km>=6) {
		tien=1*5000+4*4500+(km-5)*3500;
		if (km>120) {
			tien=tien-(tien*0.1);
		}
	}
	 
	cout << "Gia tien phai tra: " << tien;
}