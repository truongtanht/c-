#include <iostream>
using namespace std;
int main () {
	float a,b,c;
	float diemTB;
	cout << "Nhap diem toan: ";
	cin>>a;
	cout << "Nhap diem ly: ";
	cin>>b;
	cout << "Nhap diem hoa: ";
	cin>>c;
	diemTB=(a+b+c)/3;
	cout << "Diem trung binh la: " << diemTB;
}
