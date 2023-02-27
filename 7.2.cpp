#include <iostream>
using namespace std;
int tinhtong(int n);
int main () {
	int n;
	cin >> n;
	cout << "Tong tu 1 den " << n << " la: " << tinhtong(n);
	
}
int tinhtong(int n) {
	int s =0;
	for (int i=1; i <= n; i++) {
		s+=i;
	}
	return s;
}
