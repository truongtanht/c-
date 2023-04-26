#include <iostream>
using namespace std;
int GiaiThua(int n);
int main () {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << n << "!= " << GiaiThua(n);
	
}
int GiaiThua(int n) {
	if (n<=1) return 1;
	return n*GiaiThua(n-1);
}
