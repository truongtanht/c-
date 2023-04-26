#include <iostream>
#include <math.h>
using namespace std;
int GiaiThua(int n);
int HamMu(int x, int n);
int main () {
	int n, x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	double s = 1;
	
	for (int i=1; i <= n; i++) {
	s=s+HamMu(x,n)/GiaiThua(n);
	}
	cout << s;
	
}
int GiaiThua(int n) {
	int gt = 1;
	for (int i =1; i <= n; i++) {
		gt=gt*i;
	}
	return gt;
}
int HamMu(int x, int n) {
	return pow(x,n);
}
