#include <iostream>
#include <math.h>
using namespace std;
void soChinhPhuong (int n);
int main () {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	soChinhPhuong(n);
}
void soChinhPhuong (int n) {
	
	for (int i =1; i <=n; i++) {
	cout << i*i << " ";
	}
}

