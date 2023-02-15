#include <iostream>
using namespace std;
int main() {
	int n;
	int tong =0;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Cac uoc so chan cua " << n << " la: ";
	for (int i =1; i <=n; i++) {
		if(n%i==0 && i%2==0) {
			cout << i << " " ;
		}
		}
		cout << endl;
	int s=0;	
	for (int i =1; i <=n;i++) {
		if(n%i==0) {
			tong=tong+i;
			s=s+1;
		}
	}
	cout << "Tong cac uoc so cua " << n << " la: " << tong << endl;
	cout << "So cac uoc so cua " << n << " la: " << s;
	}
	
	
