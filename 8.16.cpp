#include <iostream>
#include <math.h>
using namespace std;
void soNgTotoSoKhong (int M[], int n);
int laSoNgTo(int n);
int main () {
	int n;
	cout << "Nhap so phan tu trong mang: ";
	cin >> n;
	int M[n];
	for (int i=0; i < n; i++) {
	cout << "Nhap M[" << i << "] : ";
	cin >> M[i];
	}
	soNgTotoSoKhong(M,n);
	cout << "Mang sau khi chuyen: ";
	for (int i=0; i < n;i++) {
		cout << M[i] << " ";
	}
}
int laSoNgTo(int n) {
	if (n <= 1) {
		return 0;
	}
	for (int i =2 ; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

void soNgTotoSoKhong (int M[], int n) { // 10 9 8 7 6 5
	for (int i=0; i < n; i++) {
		if (laSoNgTo(M[i]) == 1) {
			M[i] = 0;
		}
	}
}

