#include <iostream>
using namespace std;
int main () {
	int a,b, temp, ucln,bcnn;
	cout << "Nhap a va b: ";
	cin >> a >> b;
	if (b>a) {
		temp=b;
		b=a;
		a=temp;
	}
	for (int i=b; i >=1; i--) {
		if (a%i==0 && b%i == 0) {
			ucln=i;
			break;
		}
	}
	cout <<"UClN cua a va b la: " << ucln << endl;
	bcnn=(a*b)/ucln;
	cout << "BCNN cua a va b la: " << bcnn;
}