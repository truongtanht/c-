#include <iostream>
#include <math.h>
using namespace std;
int main () {
	double x;
	int n;
	double s=1;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	for (int i =1; i <= n; i++)
	{
		double tu = pow(x,i);
		int mau=1;
		for (int j=1; j <= i; j++)
		
			mau=mau*j;
		
		s=s+tu/mau;
	}
	cout << "s("<<x<<","<<n<<")="<<s;
	
}
