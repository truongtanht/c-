#include <iostream>
using namespace std;
int main () {
	int bienso, nut, x1 , x2 ,x3 ,x4 ,tong;
	cout << "Nhap bien so xe: ";
	cin>>bienso;
	x1=bienso%10;
	x2=(bienso/10)%10;
	x3=(bienso/100)%10;
	x4=(bienso/1000)%10;
	tong = x1 + x2 + x3 + x4;
	nut=tong%10;
	cout << "So nut la: " << nut;
}
