#include <iostream>
using namespace std;
int Chiahet (int M[], int n);
int main () {
	int n , M[n];
	cout << "Nhap n phan tu: ";
	cin >> n;
	for (int i=0; i<n; i++) {
		cout << "Nhap M[" << i << "]=";
		cin >> M[i];
	}
	cout << "Co " << Chiahet(M,n) << " so chia het cho 4 nhung khong chia het cho 5 trong mang";
}
int Chiahet (int M[], int n) {
	int dem=0;
	for (int i =0; i < n; i++) {
		if (M[i]%4==0 && M[i]%5 !=0) {
			dem=dem+1;
		}
	}
	return dem;
}
