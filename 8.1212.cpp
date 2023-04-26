#include <iostream>
#include <math.h>
using namespace std;
int lasoNgTo(int n);
void Delete(int a[], int vt, int &n);
void TachMang(int a[], int &n);
void xuat (int a[], int n);
int main () {
	int n;
	cout << "Nhap so phan tu trong mang: ";
	cin >> n;
	int a[n];
	for (int i=0; i < n; i++) {
		cout << "Nhap a[" << i << "] : ";
		cin >> a[i];
	}
	TachMang(a,n);
}
int lasoNgTo(int n) {
	if (n <= 1) {
		return 0;
	}
	for (int i =2; i <= sqrt(n); i++) {
		if (n%i == 0) {
			return 0;
		}
	}
	return 1;
}

void Delete(int a[], int vt, int &n) {
	for (int i=vt; i < n-1; i++) {
		a[i] = a[i+1];
	}
	n--;
}

void xuat (int a[], int n) {
	for (int i=0; i< n; i++) {
		cout << " " << a[i];
	}
}

void TachMang(int a[], int &n) {
	int b[n], x=0;
	for(int i=0; i < n; i++) {
		if (lasoNgTo(a[i])==1) {
			b[x]=a[i];
			x++;
		//	Delete(a,i,n);
			for (int j =i; j < n-1; j++) {
				a[j] = a[j+1];
				
			}
			n--;
			i--;
		}
	}
	cout << "Mang a sau khi tach: " << endl;
	xuat(a,n); 
	cout << "\nMang b gom cac so nguyen to: " << endl;
	xuat(b,x);	
}
