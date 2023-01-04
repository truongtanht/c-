#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	int a, b;
	cin >> a >>b;
	cout << "Tong cua 2 so " << setw(-5) << a << " va " << setw(-3) << b<< " la " << setw(-1) << a+b;
}
