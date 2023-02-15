#include <iostream>
using namespace std;
int main () {
	int a, b, c, d, max;
	cout << "Nhap vao 4 so: ";
	cin >>a>>b>>c>>d;
	max=a;
	max<b?max=b:max=max;
	max<c?max=c:max=max;
	max<d?max=d:max=max;
	cout << max;
}
