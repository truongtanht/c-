#include <iostream>
#include <math.h>
using namespace std;
int main () {
	int diem;
	cout << "Nhap diem: ";
	cin >> diem;
	if (diem>=0 && diem <=10) {
		if (diem >= 9) {
			cout << "Xuat sac";
		}
		else if (diem >= 8 && diem <9) {
			cout << "Gioi";
		}
		else if (diem >= 7 && diem <8) {
			cout << "Kha";
		}
		else if (diem >= 6 && diem <7) {
			cout << "Trung binh kha";
		}
		else if (diem >=5 && diem <6) {
			cout << "Trung binh";
		}
		else cout << "Yeu";
		
	}
	else cout << "Diem khong hop le";
}