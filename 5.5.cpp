#include <iostream> 
using namespace std;
int main () {
	int gio, phut, giay, giocong, phutcong, giaycong;
	cout << "Nhap gio: ";
	cin >> gio;
	cout << "Nhap phut: ";
	cin >> phut;
	cout << "Nhap giay: ";
	cin >> giay;
	cout << "Nhap so giay cong vao: ";
	cin >> giaycong;
	
	giocong=(giaycong/3600);
	phutcong=(giaycong%3600)/60;
	giaycong=(giaycong%3600)%60;
	
	gio=gio+giocong;
	phut=phut+phutcong;
	giay=giay+giaycong;
	
	if (giay>59) {
		giay=giay-60;
		phut=phut+1;
	}
	if (phut>59) {
		phut=phut-60;
		gio=gio+1;
	}
	cout << gio << ":" << phut << ":" << giay;
}
