#include <iostream> 
using namespace std;
int tinhgiaithua(int n);
int main () {
	int t;
	cin >> t;
	int gt =tinhgiaithua(t);
	cout << t << "! = " << gt;
	return 0;
}
	
	
	int tinhgiaithua(int n) {
		if (n<=1) {
			return 1;
		}
			return n*tinhgiaithua(n-1);
	}


