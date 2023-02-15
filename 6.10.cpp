#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Nhap bang cuu chuong so: ";
	cin >>n;
	for (int i=1; i<=9; i++) {
		cout << n << "x" << i << "=" <<n*i << endl;
	}
}