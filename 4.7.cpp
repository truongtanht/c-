#include <iostream>
#include <iomanip>

using namespace std;
int main () {
	int a, b;
	cin >> a >> b;
	cout << "Tong cua 2 so " << setfill('0') << setw(2) << a << " va " << setfill ('0') << setw(2) << b << " la " << setfill('0') << setw(4) << a+b;
}
