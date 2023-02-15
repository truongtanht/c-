#include <iostream>
#include <math.h>
using namespace std;
int main () {
	int thang;
	cout << "Nhap thang: ";
	cin >> thang;
	switch (thang) {
		case 1 : case 2 : case 3 : cout << "Mua Xuan";
		break;
		case 4 : case 5 : case 6 : cout << "Mua Ha";
		break;
		case 7 : case 8 : case 9 : cout << "Mua Thu";
		break;
		case 10 : case 11 : case 12: cout << "Mua Dong";
	}
}