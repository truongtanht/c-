#include <iostream>
using namespace std;
//Viet ham tra ve vi tri cuoi cung cua phan tu x trong mang gom n so nguyen
int vitri(int M[], int n, int &x);
void nhap(int M[], int n);
void nhap(int M[], int n) {

	cout << "Nhap so phan tu trong mang: ";
	cin >> n;
	for (int i=0; i<n; i++) {
		cout << "Nhap M[" << i << "]=";
		cin >> M[i];
	}
}
int main () {
	int n, M[n];
	nhap(M,n);
	int x;
	cout << "Nhap phan tu can tim: ";
	cin >> x;
	cout << "Vi tri cuoi cung cua " << x << " trong mang la: " << vitri(M,n,x);
}
int vitri(int M[], int n, int &x) {
	int vt;
	for (int i =0; i< n; i++) {
		if (M[i]==x) {
			vt=i;
		}
	}
	return vt;
	
}

