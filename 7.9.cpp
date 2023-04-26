#include <iostream>
using namespace std;
int soHoanThien (int n);
int main () {
	int n;
	cin >> n;
	int check;
	int dem =0;
	cout << "Cac so hoan thien nho hon " << n << " la: ";
	for (int i=1; i < n; i++) {
		check=soHoanThien(i);
		if (check==1) {
			cout << i << " ";
		}
	}
}

int soHoanThien (int n) {
	int s=0;
	int t=0;
	for (int i=1; i < n; i++) {
		if (n%i == 0) {
			s=s+i;
		}
	}
	if (s==n) {
		t=1;
	}
	return t;
}

