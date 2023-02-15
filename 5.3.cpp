#include <iostream>
using namespace std;
int main () {
	float a, b, x;
	cout << "Nhap a va b: ";
	cin >> a >> b;
	//giai pt Ax+B=0
	if (a==0) {
		if (b==0) {
			cout << "PT co vo so No";
		}
		else {
			cout << "PT vo No";
		}
	}
	else cout << "PT co No: " << "x = " << -b/a;
}
