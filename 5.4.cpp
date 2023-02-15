#include <iostream>
#include <math.h>
using namespace std;
int main () {
	int a, b, c, x1, x2, delta;
	cout << "Nhap a, b, c: ";
	cin >> a >> b >> c;
	if (a==0) {
		if (b==0) {
			if (c==0) {
				cout << "PT vo so nghiem";
			}
			else cout << "PT vo nghiem";
		}
		else  cout << "PT co nghiem x = " << -c/b;
		
	}
	else {
		delta = b*b-4*a*c;
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		if (delta>0) {
			cout << "PT co 2 nghiem " << "x1 = " << x1 << "  "<< "x2 = " << x2;
		}
		else if (delta==0) {
			cout << "PT co nghiem kep x = " << -b/(2*a);
		}
		else cout << "PT vo nghiem";
	}
}