#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	int a,b ,c;
	cin >> a >> b >>c;
	cout << setw(7) << right << a << setw(7) << right << b << setw(7) << right << c;
	cout << endl;
	cout << setw(7) << left << a << setw(7) << left << b << setw(7) << left << c;
}
