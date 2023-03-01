#include <iostream>
using namespace std;
int main () {
	// ve hinh chu nhat rong
	int h, c;
	cout << "Nhap chieu cao: ";
	cin >> h;
	cout << "Nhap chieu dai: ";
	cin >> c;
	for (int i =1; i <= h; i++) {
		for (int j =1; j <= c; j++) {
			if (i== 1 || i == h || j == 1 || j == c) {
				cout << " * ";
			}
			else cout << "   ";
		}
		cout << endl;
	}
}
