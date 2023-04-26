#include <iostream>;
using namespace std;
void Hoanvi(int &a, int &b);
void Sapxep(int M[], int n);
int main () {
	int n;
	cout << "Nhap so phan tu trong mang: ";
	cin >> n;
	int M[n];
	for (int i=0; i < n; i++) {
		cout << "Nhap M[" << i << "] : ";
		cin >> M[i];
	}
	cout << "Mang truoc khi sap xep: ";
	for (int i=0; i < n; i++) {
		cout << M[i] << " ";
	}
	cout << endl;
	Sapxep(M, n);
	cout << "Mang sau khi sap xep: ";
	for (int i=0; i < n; i++) {
		cout << M[i] << " ";
	}
	
}
void Hoanvi(int &a, int &b) {
	int temp = a;
	a = b; 
	b = temp;
}
void Sapxep( int M[], int n) {
	// Sap xep phan tu trong mang giam dan // 3 2 1 0 0 -1 -2 -3
	for (int i=0; i< n-1; i++) {
		for (int j =i+1; j < n; j++) {
			if (M[i] < M[j]) {
				Hoanvi(M[i], M[j]);
			}
		}
	}
	// Tim vi tri duong cuoi cung // 3 2 1 0 0 -1 -2 -3
	int viTriSoDuongCuoiCung = -1;
	for (int i =0; i <n; i++) {
		if (M[i] > 0) {
			viTriSoDuongCuoiCung =i;
		}
	}
	
	// Dua cac so am len cuoi mang // 3 2 1 -1 -2 -3 0 0
	if (viTriSoDuongCuoiCung != -1) {
		int viTriSoAmDau = viTriSoDuongCuoiCung +1;
		for (int i = viTriSoDuongCuoiCung +1; i < n; i++) {
			if (M[i] < 0) {
				Hoanvi(M[viTriSoAmDau], M[i]);
				viTriSoAmDau++;
			}
		}
	}
	
	// Sap xep cac so am tang dan // 3 2 1 -1 -2 -3 0 0
	for (int i= viTriSoDuongCuoiCung +1; i < n-1; i++) { 
		for (int j =i+1; j < n; j++) { 
			if (M[i] > M[j]) {
				Hoanvi(M[i], M[j]); 
			}
		}
	}
}



