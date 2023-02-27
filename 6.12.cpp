#include <iostream>
using namespace std;
int main () {
	int n;
	cin >> n;
	int tu=1;
	int mau;
	float kq=1;
	int dau=-1;
	for (int i=1; i <= n; i+=2) {
		kq=kq+(dau)*(1/2*i*2*i);
		dau=dau*(-1);
		
	}
	cout << kq;
}
