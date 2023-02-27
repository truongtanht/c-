#include <iostream>
using namespace std;
int fibo(int n);
void xuatdayfibo (int n);
int main () {
	int n;
	cin >> n;
	cout << fibo(n) <<endl;
	xuatdayfibo(n);
	
}
int fibo(int n) {
	int f1 = 1, f2 =1, f3 =1;
	for (int i =1; i <= n; i ++) {
		f1=f2;
		f2=f3;
		f3=f1+f2;

	}
	return f1;
	
}
void xuatdayfibo (int n) {
	for (int i=1; i <= n; i++) {
		cout << fibo(i) << " ";
	}
}

