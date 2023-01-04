#include <iostream>
using namespace std;
int main () {
	int a,b,c,x1,x2,x3,x4;
	cout << "Nhap vao so bieu dien ngay: ";
	cin >>a;
	cout << "Nhap vao so bieu dien thang: ";
	cin >>b;
	cout << "Nhap vao so bien dien nam: ";
	cin >>c;
	x1=c%10;
	x2=(c/10)%10;
	cout << a << "/" << b << "/" <<x2 <<x1;

}
