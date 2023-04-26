#include <iostream>
using namespace std;
void TachMang(double a[], int n, int b[], int &nb, double c[], int &nc);
int main () {
	int n;
	cout << "Nhap so phan tu cua mang a: ";
	cin >> n;
	double a[n];
	for (int i=0; i < n; i++) {
		cout << "Nhap a[" << i << "] : ";
		cin >> a[i];
	}
	int nb, nc;
	int b[n];
	double c[n];
	TachMang(a, n, b, nb, c, nc);
	
}
void TachMang(double a[], int n, int b[], int &nb, double c[], int &nc) {
	nb =0,
	nc = 0;
	for (int i=0; i < n; i++) {
		if (a[i] > 0) {
			int temp = (int)a[i];
			if (a[i] == temp) {
				b[nb] = a[i];
				nb++;
			}
			else {
				c[nc] = a[i];
				nc++;
			}
		}
		else {
			c[nc] = a[i];
			nc++;
		}
}
	cout << "Mang b : ";
	for (int i =0; i < nb; i++) {
		cout << b[i] << " ";
	}
	cout << endl;
	cout << "Mang c : ";
	for (int i=0; i < nc; i++) {
		cout << c[i] << " ";
	}
}
