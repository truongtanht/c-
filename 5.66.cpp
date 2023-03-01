#include <iostream>
using namespace std;
int main () {
	long long km, giatien;
	cout << "Nhap so km: ";
	cin >> km;
	if (km <= 1) {
		giatien = 5000;
	}
	else if (km >= 2 && km <=5 ) {
		giatien = 5000 + (km-1)*4500;
	}
	else if (km > 5) {
		giatien = 1*5000 + 4*4500 + (km-5)*3500;
		if (km >120) {
			giatien=giatien-giatien*0.1;
		}
		
	}
	
	cout << giatien;
	
}
