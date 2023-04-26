#include <iostream>
using namespace std;
void DoisangNhiPhan(int n);
int main () {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	DoisangNhiPhan(n);
}
void DoisangNhiPhan(int n) {
	if (n>0) {
	int t= n % 2;
	DoisangNhiPhan(n/2);
	cout << t << " ";
} 
}
