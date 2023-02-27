#include <iostream> 
using namespace std;
void H10toH2(int n);
int main () {
	int a;
	cin >> a;
    H10toH2(a);
}

void H10toH2(int n) {
	if (n>0) {
		int t=n%2;
		H10toH2(n/2);
		cout << t << " ";
	}
}

