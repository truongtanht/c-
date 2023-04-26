#include <iostream>
#include <math.h>
using namespace std;
int HamMu (int x, int n);
int main () {
	float x;
	int n;
	cin >> x;
	cin >> n;
	cout << x << "^" << n << "=" << HamMu(x,n) << endl;
	double s= pow(1.5,8);
	int dau=-1;
	for (int i =1; i <= n; i++) {
		s=s+dau*pow((x+i),i)/pow(i,2);
		dau=dau*(-1);
	}
	cout << s;
}
int HamMu (int x, int n) {
	return pow(x,n);
}
