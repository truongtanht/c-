#include <iostream>
using namespace std;
int main () {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int tong = 0;
	for (int i = 1; i<=n; i++) {
		tong=tong+i;
	}
	cout << tong;
	
}