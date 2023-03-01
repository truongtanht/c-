#include <iostream>
using namespace std;
int main () {
	int h, c;
	cout << "Nhap chieu cao: ";
	cin >> h;
	cout << "Nhap chieu dai: ";
	cin >> c;
	for (int i=1; i <= h; i++) {
		for (int j=1 ; j <= c; j++ ) {
			cout << "*" << " ";
		}
		cout << endl;
	}
	
	
}
