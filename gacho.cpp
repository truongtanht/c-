#include <iostream>
using namespace std;
int main () {
	for (int i =0; i <= 36; i++) {
		if ((i * 2 + (36 - i) * 4)==100) {
			cout << "So ga la: " << i << endl;
			cout << "So cho la: " << 36-i;
			break;
		}
	}
}
