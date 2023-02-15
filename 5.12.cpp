#include <iostream> 
using namespace std;
int main () {
	int ngay, thang, nam;
	cout << "Nhap ngay thang nam: ";
	cin >> ngay >> thang >> nam;
	if (ngay>0 && ngay <32 && thang >0 && thang < 13 && nam >0) {
		cout << "Hop le" << endl;
		switch (thang) {
			case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 : cout << "31 ngay" << endl;
			break;
			case 4 : case 6 : case 9 : case 11 : cout << "30 ngay" << endl;
			break;
			case 2 : cout << "29 ngay" << endl;
		}
		cout << "Ngay hom truoc la ngay " << ngay-1 << endl;
		cout << "Ngay hom sau la ngay " << ngay+1;
	}
	else cout << "Khong hop le";
	
}
