#include <iostream>
using namespace std;
int main () {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int giaithua=1;
	for (int i=1; i<=n; i++) {
		giaithua=giaithua*i;
	}
	cout << giaithua;
	
}