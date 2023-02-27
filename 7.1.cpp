#include <iostream>
using namespace std;
int giaithua(int n);
int main () {
	int n;
	cin >> n;
	cout << n << "! = " << giaithua(n);
}
int giaithua(int n) {
	int gt =1;
	for (int i=1; i <= n; i++) {
		gt=gt*i;
	}
	return gt;
}
