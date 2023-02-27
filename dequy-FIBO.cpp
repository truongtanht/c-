#include <iostream>
using namespace std;
int fibo(int n);
void xuatdayfibo(int n);
int main () {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << fibo(n) << endl;
	xuatdayfibo(n);
}

int fibo(int n) {
	if (n<=2) {
		return 1;
	}
		return fibo(n-1)+fibo(n-2);
}

void xuatdayfibo(int n) {
	for (int i= 1; i <= n; i++) {
		cout <<	fibo(i) << " ";
		
	}
}
