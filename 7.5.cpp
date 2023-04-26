#include <iostream>
using namespace std;
int TinhGiaiThua (int n);
int main () {
	int n, k;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap k: ";
	cin >> k;
	cout << "To hop chap " << k << " cua " << n << " = " << TinhGiaiThua(n)/(TinhGiaiThua(k)*(TinhGiaiThua(n-k)));
}
int TinhGiaiThua (int n) {
	int gt=1;
	for (int i =1; i <= n; i++) {
		gt=gt*i;
	}
	return gt;
}
