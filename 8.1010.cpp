#include <iostream> 
#include <math.h>
using namespace std;
// viet ham tra ve vi tri so ngto dau tien trong mang
int vitridauOfsoNgTo (int M[], int n);
int main () {
	int n;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	int M[n];
	for (int i =0; i < n; i++) {
		cout << "Nhap M[" << i << "]=";
		cin >> M[i];
	}
	int vt = vitridauOfsoNgTo (M,n);
	if (vt == -1) {
		cout << "Khong tim thay so nguyen to trong mang." << endl;
	}
	else cout << "Vi tri cua so nguyen to dau tien trong mang la: " << vt;
	
}
int vitridauOfsoNgTo (int M[], int n) {
	for (int i =0; i < n; i ++) {
		bool soNgTo = true;
		if (M[i] <= 1) {
			soNgTo = false;
		}
		for (int j =2; j <= sqrt(M[i]); j++) {
			if (M[i] % j ==0) {
				soNgTo = false;
				break;
			}
		}
		if (soNgTo == true) {
			return i;
		}
	}
	return -1;

}
