#include <iostream>
using namespace std;
int MangTangDan(int M[], int n);
int main () {
	int n , M[n];
	cout << "Nhap n phan tu: ";
	cin >> n;
	for (int i=0; i<n; i++) {
		cout << "Nhap M[" << i << "]=";
		cin >> M[i];
	}
	if (MangTangDan(M,n)==1) cout << "Mang tang dan";
	else cout << "Mang khong tang dan";
}
int MangTangDan(int M[], int n) {
	/*int dem=0;
	for (int i=0; i <n-1; i++) {
		if ( M[i] <= M[i+1]) {
			dem=dem+1;
		}
 	}
 	if (dem==n-1) cout << "Mang tang dan";
 	else cout << "Mang khong tang dan";
 	*/
 	
 	for (int i=0; i< n-1; i++) {
 		if (M[i] > M[i+1]){
		  return 0;
		  }
	 }
	 return 1;
}
