#include <iostream>
#include <math.h>
using namespace std;
bool laNgTo(int n);
int soNgToMin(int M[], int n);
int main () {
	int n;
	cout << "Nhap so phan tu cua mang so nguyen to: ";
	cin >> n;
	int M[n];
	for (int i=0; i < n; i++) {
		cout << "Nhap M[" << i << "] : ";
		cin >> M[i];
		for (int j =0; j < n; j++) {
			if (laNgTo(M[i]) == false) {
				cout << "Moi ban nhap lai: " << endl;
				cout << "Nhap M[" << i << "] : ";
				cin >> M[i];
			}
		}
	}
	int min = soNgToMin(M,n);
	cout << "So nguyen to nho nhat trong mang la: " << min;
	
}
bool laNgTo(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i=2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int soNgToMin(int M[], int n) {
	int min = M[0];
	for (int i =0; i < n; i++ ) {
		if ( M[i] < min) {
			min = M[i];
		}
	}
	return min;
}


