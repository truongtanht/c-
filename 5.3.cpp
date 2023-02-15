#include <iostream>
using namespace std;
int main () {
	int a,b;
	cout << "Nhap a va b: ";
	cin >> a >> b;
	if (a==0) {
		if (b==0) {
			cout << "PT vo so nghiem";
		}
		else cout << "PT vo nghiem";
	}
	else cout << "PT co nghiem x = " << -b/a;
	
	
}