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

void deletePrimes(int arr[], int& size) {
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            for (int j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            size--;
            i--;
        }
    }
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

    deletePrimes(arr, n);

    cout << "Cac phan tu con lai trong mang: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
