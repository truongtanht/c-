#include <iostream>
#include <math.h>
using namespace std;
int main () {
float a, b, c, delta, x1, x2;
    cout << "Nhap a b c : ";
    cin >> a >> b >> c;
    if (a==0) {
    	//PT co dang Bx+C=0
    	if (b==0) {
    		if (c==0) {
    			cout << "PT co vo so nghiem";
			}
			else cout << "PT vo nghiem";
		}
		else cout << "PT co 1 nghiem x = " << -c/b;
	}
	else {
		delta=b*b-4*a*c;
		x1=(-b+sqrt(delta))/(2*a);
		x2=(b+sqrt(delta))/(2*a);
		if (delta>0) {
			cout << "PT co 2 nghiem phan biet";
			cout << "x1 = " << x1;
			cout << "x2 = " << x2;
		}
		else if (delta==0) {
			cout << "PT co nghiem kep x1 = x2 =" << -b/(2*a);
		}
		else cout << "PT vo nghiem";
	}
}


