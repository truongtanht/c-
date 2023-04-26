#include <iostream>
using namespace std;
float LuyThua (float x, int n);
int main () {
	float x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	cout << n << "^" << x << "= " << LuyThua(n,x);
}
float LuyThua (float x, int n) {
	if (n==1) return x;
	return (x*LuyThua(x,n-1));
}
