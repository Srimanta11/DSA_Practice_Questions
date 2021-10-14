// https://codeforces.com/contest/1462/problem/A

#include <iostream>

using namespace std;

int main () {
    int t, n, i;
    cin >> t;
    while(t--) {
        cin >> n;
        int a[n+1], b[n+1];
        for ( i = 1; i <= n ; i++)   cin >> a[i];
        for ( i = 1; i <= n/2 ; i++) {
            cout << a[i] << " " << a[n-i+1] << " ";
        }
        if(n%2 == 1) {
            cout << a[i];
        }
        cout << endl;
    }
    
    return 0;
}
