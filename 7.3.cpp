#include <iostream>
using namespace std;
void songuyento(int n);
int main () {
	int n;
	cin >>n;
	songuyento(n);
}
void songuyento(int n) {
	int s=0;
	for (int i =1; i <= n; i++) {
		if (n%i==0) {
			s=s+1;
		}
		
	}
	if (s <= 2) {
			cout << n << " la so nguyen to";
		}
	else cout << n << " khong la so nguyen to";
}
