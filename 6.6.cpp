#include <iostream>
using namespace std;
int main()
{
    int n; int q = 0;
    
    cout <<"Nhap chieu cao tam giac: \n";
    cin >> n;
    while (n > 0)
    {
        for (int i = 1; i<n; i++)
            cout << " ";
        for (int k = 0; k <= q; k ++)
            cout << "*";
        n -- ;
        q += 2 ;
        cout << endl;
    }
    return 0;
}