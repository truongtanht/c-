#include <iostream>
using namespace std;
int main () {
	int n;
	int tong = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i=1; i <= n; i++) {
		if (i%2==0) {
			tong=tong+i;
		}
	}
	cout << tong;
}