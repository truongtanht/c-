#include <iostream>
using namespace std;
void SapxepTang (int M[], int n);
int main () {
	int n;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	int M[n];
	for (int i=0; i < n; i++ ) {
		cout << "Nhap M [" << i << "]=";
		cin >> M[i];
	}
	SapxepTang(M, n);

   cout << "Mang sau khi sap xep tang dan: ";
   for (int i = 0; i < n; i++) {
      cout << M[i] << " ";
   }
   cout << endl;
}
void SapxepTang (int M[], int n) {
//	int temp;
	for (int i =0; i < n-1; i++) {
		for (int j=i+1; j < n; j++) {
			if (M[i] > M[j]) {
				int temp = M[i];
				M[i] = M[j];
				M[j] = temp;
			}
		}
	}
	
}
