#include <iostream>
#include <math.h>
using namespace std;
int toanNguyenTo(int M[], int n);
int laNguyenTo(int n);
int main () {
	int n , M[n];
	cout << "Nhap n phan tu: ";
	cin >> n;
	for (int i=0; i<n; i++) {
		cout << "Nhap M[" << i << "]=";
		cin >> M[i];
	}
	if (toanNguyenTo(M,n)==1) cout << "Mang toan so nguyen to";
	else cout << "Mang khong toan so nguyen to";
}
int laNguyenTo(int n) {
	if (n <=1) {
		return 0;
	}
	for (int i=2; i <= sqrt(n); i++) {
		if (n%i==0) {
			return 0;
		}
	}
	return 1;
}
int toanNguyenTo(int M[], int n) {
	for (int i=0; i < n; i++) {
		if (laNguyenTo(M[i])==0) {
			return 0;
		}
	}
	return 1;
}
/*	int dem2=0;
	for (int i =0; i< n; i++) {
		int dem1=0;
		for (int j =1; j <=M[i]; j++) {
			if (M[i]%j==0) {
				dem1=dem1+1;
			}
		}  
		if (dem1==2) {
			dem2=dem2+1;
		}
	}
	
	if (dem2==n) cout << "Mang toan la so nguyen to";
	else cout << "Mang khong toan la so nguyen to";
	*/

