#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Nhap n: ";
	cin >>n;
	int s=0;
	for (int i=1; i <=n; i++) {
		if (i%2!=0) {
			s=s+i;
		}
	}
	cout << s;
	
}