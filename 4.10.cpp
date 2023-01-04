#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	float a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	cout << setw(10) << left << fixed <<setprecision(2) << a << setw(10) << left << fixed <<setprecision(2) << b << setw(10) <<left<< fixed <<setprecision(2) << c;
	cout << endl;
	cout << setw(10) << left << fixed <<setprecision(2) << d << setw(10) << left << fixed <<setprecision(2) << e << setw(10) <<left<< fixed <<setprecision(2) << f;
}
