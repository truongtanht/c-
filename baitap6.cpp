#include <iostream>
using namespace std;
int main () {
	int giay, phut, gio;
	cout << "Nhap vao so giay: ";
	cin>>giay;
	gio=giay/3600;
	phut=(giay%3600)/60;
	giay=(giay%3600)%60;
	cout << gio <<":" << phut << ":" << giay;
}
