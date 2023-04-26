#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void insertZeros(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])== true) {
            cout << arr[i] << "0 ";
        } else {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int arr[n];
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertZeros(arr, n);

    return 0;
}
