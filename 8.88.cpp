#include <iostream>
using namespace std;
// viet ham tinh tong so ngto trong mang
int TinhTong(int M[], int n);
int main () {
	int n;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	int M[n];
	for (int i =0; i < n; i++) {
		cout << "Nhap M[" << i << "]=";
		cin >> M[i];
	}
	int tong = TinhTong (M,n);
	cout << "Tong cac so nguyen to trong mang la: " << tong;
}
int TinhTong(int M[], int n) {
	int s =0;
	for (int i=0; i < n; i++) {
		bool laNgto = true;
		for (int j =2; j *j <= n; j++) {
			if (M[i] % j == 0) {
				laNgto = false;
			}
		}
		if (laNgto = true) {
			s = s+M[i];
		}
	}
	return s;
}
