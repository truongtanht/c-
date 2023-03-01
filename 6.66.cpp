#include <iostream>
#include <math.h>
using namespace std;
int main () {
	int h;
	cin >> h;
	for (int i=1; i <= h; i++) {
		for (int j=1; j <= 2*h-1; j++) {
			if (abs(h-j) == i-1 || i==h ) {
				cout << "*";
			}
			else cout << " ";
		}
		cout << endl;
	}
}
