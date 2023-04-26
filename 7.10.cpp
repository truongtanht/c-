#include <iostream>
#include <math.h>
using namespace std;
//giaiPTbac2
int Delta(float a, float b, float c);
int main () {
	double a, b, c;
	cout << "Nhap a b c: ";
	cin >> a >> b >> c;
	if (a==0) {
		if (b==0) {
			if (c==0) {
				cout << "PT co vo so nghiem";
			}
			else cout << "PT vo nghiem";
		}
		else cout << "PT co nghiem x= " << (float)-c/b;
	}
	else {
		double x1 =(-b + sqrt(Delta(a,b,c)))/(2*a);
		double x2 = (-b - sqrt(Delta(a,b,c)))/(2*a);
		if (Delta >0) {
			cout << "PT co nghiem x1 = " << x1 << " ; " << "x2 = " << x2;
		}
		else if (Delta == 0) {
			cout << "PT co nghiem kep x1 = x2 = " <<(float)-b/(2*a);
		}
		else cout << "PT vo nghiem";
	}
}
int Delta(float a, float b, float c) {
	float delta = b*b-4*a*c;
	return delta;
}
