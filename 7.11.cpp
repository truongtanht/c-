#include <iostream>
using namespace std;
int main () {
	int luachon;
	float doC, doF;
	cout << "1.Chuyen do C sang do F" << endl;
	cout << "2.Chuyen do F sang do C" << endl;
	cout << "Moi nhap lua chon cua ban: " << endl;
	cin >> luachon;
	if (luachon==1) {
		cout << "Moi ban nhap do C: " << endl;
		cin >> doC;
		doF=(doC*1.8)+32;
		cout << "Do F tuong ung la: " << doF << endl;
	}
	else {
		cout << "Moi ban nhap do F: " << endl;
		cin >> doF;
		doC=(doF-32)/1.8;
		cout << "DO C tuong ung la: " << doC << endl;
	}
}
