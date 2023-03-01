#include <iostream>
using namespace std;
int main () {
	int n;
	cin >> n;
	int t=0;
	for (int i =1; i <= n; i++) {
		if (n%i==0) {
			
			t=t+1;
		}
	}
	if (t>2) {
		cout << n << " khong phai la so nguyen to";
	}
	else cout << n << " la so nguyen to";
}
